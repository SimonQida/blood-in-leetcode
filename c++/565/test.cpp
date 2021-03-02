#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<int> data {5,4,0,3,1,6,2};
    EXPECT_EQ(s.arrayNesting(data), 4);
}
