#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<string> strs{"10", "0001", "111001", "1", "0"};

    EXPECT_EQ(s.findMaxForm(strs, 5, 3), 4);
}
