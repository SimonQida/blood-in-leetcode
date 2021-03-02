#include<iostream>
#include "gtest/gtest.h"
#include "unionSet.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    
    vector<vector<int>> vvdata = {{0, 0}, {1, 0}, {0, 1}, {1, 2}, {2, 1}, {4, 4}};
    EXPECT_EQ(4, s.removeStones(vvdata));
}
