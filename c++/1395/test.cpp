#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    Solution sol;
    vector<int> x{2,1,3};
    int res = sol.numTeams(x);
    EXPECT_EQ(res, 1);
}
