#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
}

TEST(TEST, EXAMPLE){
    vector<int> v{1,1,2,2,3,4,4,5,5};
    Solution sol;
    EXPECT_EQ(sol.singleNumber(v), 3);
}
