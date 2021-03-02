#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    Solution sol;
    vector<int> data {1,2,3,8,9,10};
    int result = sol.numberOfArithmeticSlices(data);
    EXPECT_EQ(result, 2);
}
