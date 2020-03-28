cmake_minimum_required(VERSION 3.15)
project(test)

set(CMAKE_CXX_STANDARD 14)

add_executable(test main.cpp)

include_directories(libpackager/include)

target_link_libraries(test ${CMAKE_CURRENT_SOURCE_DIR}/libpackager/lib/libpackager.so)