// test.cpp
#include "function_need_to_test.h"
#include <gtest/gtest.h>
 
TEST (RetangleAreaTest, InvalidParam) { 
    EXPECT_EQ(0, retangleArea(-1, 5));
    EXPECT_EQ(0, retangleArea(10, -2));
    EXPECT_EQ(0, retangleArea(0, 0));
}
 
TEST(RetangleAreaTest, ValidParam) {
    EXPECT_EQ(20, retangleArea(4, 5));
    EXPECT_EQ(10, retangleArea(5, 2));
    EXPECT_EQ(56, retangleArea(7, 8));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
