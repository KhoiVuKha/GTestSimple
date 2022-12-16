cmake_minimum_required(VERSION 3.2)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests test.cpp function_need_to_test.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
