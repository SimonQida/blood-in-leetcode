#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<int> nums {4,-2};
    vector<int> result {4};
    EXPECT_EQ(result, s.maxSlidingWindow(nums, 2));
}
