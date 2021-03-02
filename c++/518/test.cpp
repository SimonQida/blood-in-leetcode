#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<int> data = {1,2,5};
    EXPECT_EQ(s.change(5, data ), 4);
}
