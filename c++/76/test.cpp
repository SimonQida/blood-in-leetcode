#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    EXPECT_EQ("BANC", s.minWindow("ADOBECODEBANC", "ABC"));
    //EXPECT_EQ("", s.minWindow("aa", "aa"));
}
