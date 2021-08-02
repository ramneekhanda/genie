cmake_minimum_required(VERSION 3.10)
set(CMAKE_GENERATOR "Ninja")
project("genie")

# Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
   file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/master/conan.cmake"
                  "${CMAKE_BINARY_DIR}/conan.cmake")
endif()
include(${CMAKE_BINARY_DIR}/conan.cmake)
conan_cmake_run(REQUIRES argparse/2.1 
                fmt/7.1.3
                doctest/2.4.6
                glfw/3.3.4
                GENERATORS cmake_find_package
                BASIC_SETUP)
# compiler must be 11 or 14
set(CMAKE_CXX_STANDARD 17)

set(ANTLR4_WITH_STATIC_CRT OFF)
set(ANTLR_OUT_PATH ${PROJECT_SOURCE_DIR}/grammar/generated)
set(ANTLR4_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/antlr/antlr4-runtime-mac/antlr4-runtime/)
set(ANTLR4_LIBS_DIRS ${PROJECT_SOURCE_DIR}/antlr/antlr4-runtime-mac/lib)

add_subdirectory(grammar)


# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
#set(ANTLR_EXECUTABLE ${PROJECT_SOURCE_DIR}/antlr/bin/antlr-4.9.1-complete.jar)

set(CMAKE_CXX_FLAGS "-Wall" )

file(GLOB GRAMMAR_FILES ${ANTLR_OUT_PATH}/*.cpp)

#add_custom_target(grammar
#  COMMAND java -Xmx500M -cp ${ANTLR4_BIN}:$$CLASSPATH org.antlr.v4.Tool -Dlanguage=Cpp ${PROJECT_SOURCE_DIR}/grammar/GenieLexer.g4  ${PROJECT_SOURCE_DIR}/grammar/GenieParser.g4 -o ${ANTLR_OUT_PATH})

add_executable(genie ${GRAMMAR_FILES} src/main.cxx)
add_executable(grammarTests ${GRAMMAR_FILES} test/grammar/main.cxx)

add_dependencies(genie grammar)
add_dependencies(grammarTests grammar)

add_custom_target(runGrammarTest 
  COMMAND ${CMAKE_BINARY_DIR}/bin/grammarTests)
add_dependencies(runGrammarTest grammarTests)


target_compile_definitions(genie PUBLIC "-DANTLR4CPP_STATIC")
target_include_directories(genie PUBLIC ${ANTLR_OUT_PATH} ${ANTLR4_INCLUDE_DIRS})
target_link_directories(genie PUBLIC ${ANTLR4_LIBS_DIRS})
target_link_libraries(genie PUBLIC ${ANTLR4_LIBS_DIRS}/libantlr4-runtime.a ${CONAN_LIBS})

target_compile_definitions(grammarTests PUBLIC "-DANTLR4CPP_STATIC")
target_include_directories(grammarTests PUBLIC ${ANTLR_OUT_PATH} ${ANTLR4_INCLUDE_DIRS})
target_link_directories(grammarTests PUBLIC ${ANTLR4_LIBS_DIRS})
target_link_libraries(grammarTests PUBLIC ${ANTLR4_LIBS_DIRS}/libantlr4-runtime.a ${CONAN_LIBS})
