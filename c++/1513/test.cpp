#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    Solution sol;
    int res = sol.numSub("0110111");
    EXPECT_EQ(res, 9);
    EXPECT_EQ(sol.numSub("0"), 0);
    EXPECT_EQ(sol.numSub("111"), 6);
}
