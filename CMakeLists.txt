cmake_minimum_required(VERSION 3.20)
project(fix_parser_gen_c CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif ()

find_package(Python3 REQUIRED COMPONENTS Interpreter)

# ---- optimization options
option(FIX_NATIVE "Compile for the build machine's CPU (-march=native / -mcpu=native)" ON)
option(FIX_LTO "Link-time optimization" ON)
# PGO in two builds of the same build dir: GENERATE (instrumented, run it to record a profile), then USE.
# GCC reads the .gcda files from FIX_PGO_DIR; clang needs them merged first:
#   llvm-profdata merge -o <FIX_PGO_DIR>/merged.profdata <FIX_PGO_DIR>/*.profraw
set(FIX_PGO "OFF" CACHE STRING "Profile-guided optimization: OFF, GENERATE or USE")
set_property(CACHE FIX_PGO PROPERTY STRINGS OFF GENERATE USE)
set(FIX_PGO_DIR "${CMAKE_BINARY_DIR}/pgo" CACHE PATH "Profile directory for FIX_PGO")

if (FIX_NATIVE)
  if (CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|AMD64|i.86")
    add_compile_options(-march=native)
  else ()
    add_compile_options(-mcpu=native)
  endif ()
endif ()
if (FIX_LTO)
  include(CheckIPOSupported)
  check_ipo_supported(RESULT lto_ok OUTPUT lto_msg)
  if (lto_ok)
    set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)
  else ()
    message(WARNING "LTO not supported: ${lto_msg}")
  endif ()
endif ()
if (FIX_PGO STREQUAL "GENERATE")
  if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    add_compile_options(-fprofile-generate=${FIX_PGO_DIR} -fprofile-update=single)
    add_link_options(-fprofile-generate=${FIX_PGO_DIR})
  else ()
    add_compile_options(-fprofile-instr-generate=${FIX_PGO_DIR}/%p.profraw)
    add_link_options(-fprofile-instr-generate=${FIX_PGO_DIR}/%p.profraw)
  endif ()
elseif (FIX_PGO STREQUAL "USE")
  if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    add_compile_options(-fprofile-use=${FIX_PGO_DIR} -fprofile-correction -Wno-missing-profile)
    add_link_options(-fprofile-use=${FIX_PGO_DIR})
  else ()
    add_compile_options(-fprofile-instr-use=${FIX_PGO_DIR}/merged.profdata)
    add_link_options(-fprofile-instr-use=${FIX_PGO_DIR}/merged.profdata)
  endif ()
endif ()
message(STATUS "FIX_NATIVE=${FIX_NATIVE} FIX_LTO=${FIX_LTO} FIX_PGO=${FIX_PGO}")

# ---- code generation: quickfix.44.xml -> gen/fix/gen/*.{hpp,cpp}
set(FIX_XML ${CMAKE_CURRENT_SOURCE_DIR}/resources/quickfix.44.xml)
set(GENERATOR ${CMAKE_CURRENT_SOURCE_DIR}/generator/generate.py)
set(GEN_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/gen)
set(GEN_DIR ${GEN_ROOT}/fix/gen)
set(GEN_FILES
    ${GEN_DIR}/tags.hpp
    ${GEN_DIR}/fields.hpp ${GEN_DIR}/fields.cpp
    ${GEN_DIR}/groups.hpp ${GEN_DIR}/groups.cpp
    ${GEN_DIR}/messages.hpp ${GEN_DIR}/messages.cpp
    ${GEN_DIR}/dictionary.hpp)
add_custom_command(
    OUTPUT ${GEN_FILES}
    COMMAND ${Python3_EXECUTABLE} ${GENERATOR} --fix ${FIX_XML} --version FIX.4.4 --output ${GEN_ROOT}
    DEPENDS ${GENERATOR} ${FIX_XML}
    COMMENT "Generating FIX 4.4 parser"
    VERBATIM)
add_custom_target(generate DEPENDS ${GEN_FILES})

# ---- parser library: runtime + generated classes
add_library(fix STATIC
    src/field.cpp
    src/message.cpp
    src/group.cpp
    ${GEN_FILES})
target_include_directories(fix PUBLIC include ${GEN_ROOT})

# ---- tests
enable_testing()
set(TEST_DATA_DIR ${CMAKE_CURRENT_SOURCE_DIR}/resources)
foreach (t field_by_field_test number_ref_test test_message latency_test breakdown_test)
  add_executable(${t} tests/${t}.cpp)
  target_link_libraries(${t} PRIVATE fix)
  target_compile_definitions(${t} PRIVATE TEST_DATA_DIR="${TEST_DATA_DIR}")
endforeach ()
add_test(NAME field_by_field_test COMMAND field_by_field_test)
add_test(NAME number_ref_test COMMAND number_ref_test)
add_test(NAME test_message COMMAND test_message)
