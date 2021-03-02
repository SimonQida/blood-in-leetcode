#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    Solution sol;
    vector<int> data {1,2,1,2};
    
    EXPECT_EQ(sol.judgePoint24(data), false);
}
