project(lib)
cmake_minimum_required(VERSION 3.0)

add_executable(lib graph_test.cpp)

set(ROOT_DIR ${PROJECT_SOURCE_DIR})

include_directories(
    ${ROOT_DIR}
    ${ROOT_DIR}/include
    ${ROOT_DIR}/src

)

ADD_DEFINITIONS(-std=c++11)



