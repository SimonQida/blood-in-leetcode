#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<int> data {1,2,3,10,4,2,3,5};
    EXPECT_EQ(3, s.findLengthOfShortestSubarray(data));
}
