#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<int> data{10, 1, 2,4, 7, 2};
    EXPECT_EQ(4, s.longestSubarray(data, 5));
}
