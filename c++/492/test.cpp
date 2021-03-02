#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    Solution sol;
    EXPECT_EQ(sol.constructRectangle(10)[0], 5);
}
