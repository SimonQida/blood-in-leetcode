#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<int> data {2,4,1}, data1{3,2,6,5,0,3};
    EXPECT_EQ(2, s.maxProfit(2, data));
    EXPECT_EQ(7, s.maxProfit(2, data1));
}
