project(thread-test)

set (CMAKE_MINIMUM_REQUIRED_VERSION 2.8)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(thread-test main.cpp)
target_link_libraries(thread-test pthread)