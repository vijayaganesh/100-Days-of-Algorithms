project(lib)
cmake_minimum_required(VERSION 3.0)

add_executable(lib ${PROJECT_SOURCE_DIR}/graph/test/graph_test.cpp)

set(ROOT_DIR ${PROJECT_SOURCE_DIR})



include_directories(
    ${ROOT_DIR}
    ${ROOT_DIR}/graph/include/
    ${ROOT_DIR}/graph/src/

)

ADD_DEFINITIONS(-std=c++11)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})




