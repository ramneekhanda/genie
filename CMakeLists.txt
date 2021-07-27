cmake_minimum_required(VERSION 3.10)
set(CMAKE_GENERATOR "Ninja")

project("genie")

# compiler must be 11 or 14
set(CMAKE_CXX_STANDARD 11)

# required if linking to static library
# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)
set(ANTLR4_BIN ${PROJECT_SOURCE_DIR}/antlr/bin/antlr-4.9.2-complete.jar)

set(ANTLR4_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/antlr/antlr4-runtime-mac/antlr4-runtime/)
set(ANTLR4_LIBS_DIRS ${PROJECT_SOURCE_DIR}/antlr/antlr4-runtime-mac/lib)

# add antrl4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE ${PROJECT_SOURCE_DIR}/antlr/bin/antlr-4.9.1-complete.jar)

set(CMAKE_CXX_FLAGS "-Wall" )
set(ANTLR_OUT_PATH ${PROJECT_SOURCE_DIR}/src/grammar)

file(GLOB GRAMMAR_FILES ${ANTLR_OUT_PATH}/*.cpp)

add_custom_target(grammar
  COMMAND java -Xmx500M -cp ${ANTLR4_BIN}:$$CLASSPATH org.antlr.v4.Tool -Dlanguage=Cpp  ${PROJECT_SOURCE_DIR}/grammar/Genie.g4 -o ${ANTLR_OUT_PATH})

add_executable(genie ${GRAMMAR_FILES} src/main.cxx)
target_compile_definitions(genie PUBLIC "-DANTLR4CPP_STATIC")
target_include_directories(genie PUBLIC ${ANTLR_OUT_PATH} ${ANTLR4_INCLUDE_DIRS})
target_link_directories(genie PUBLIC ${ANTLR4_LIBS_DIRS})
target_link_libraries(genie PUBLIC ${ANTLR4_LIBS_DIRS}/libantlr4-runtime.a)
