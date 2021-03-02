#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    Solution sol;
    vector<int> data{1,1,1,1};
    int size = sol.distributeCandies(data);
    EXPECT_EQ(size, 2);
}
