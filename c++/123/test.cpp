#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<int> data {3,3,5,0,4,3,1,10}, data1{3,3,5,0,4,1,2};
    EXPECT_EQ(13, s.maxProfit(data));
    EXPECT_EQ(6, s.maxProfit(data1));
}
