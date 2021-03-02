#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<vector<int> >data {{0,1}, {0,2}, {1,2}, {1,2}};
    EXPECT_EQ(1, s.findWhetherExistsPath(3, data, 0, 2));

    vector<vector<int> >data1 {{0,1}, {0,2}, {0,4}, {0,4}, {0,1}, {1,3}, {1,4}, {1,3}, {2,3}, {3,4}};
    EXPECT_EQ(1, s.findWhetherExistsPath(5, data1, 0, 4));
}
