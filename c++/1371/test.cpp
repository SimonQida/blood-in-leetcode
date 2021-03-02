#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
}



TEST(TEST, TESTEE){
    string s = "ee";
    Solution sol;
    EXPECT_EQ(sol.findTheLongestSubstring(s), 2);
}

TEST(TEST, TESTBASE){
    string s = "eleetminicoworoep";
    Solution sol;
    EXPECT_EQ(sol.findTheLongestSubstring(s), 13);
    EXPECT_EQ(sol.findTheLongestSubstring("bcbcbc"), 6);
    EXPECT_EQ(sol.findTheLongestSubstring("leetcodeisgreat"), 5);
}
