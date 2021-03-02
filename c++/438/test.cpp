#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    Solution sol;
    vector<int> res3 = sol.findAnagrams("abab", "ab");
    EXPECT_EQ(res3.size(), 3);
    cout<<res3[0]<< " "<<res3[1]<<endl;
/*
    vector<int> res = sol.findAnagrams("cbaebabacd", "abc");
    EXPECT_EQ(res.size(), 2);
    EXPECT_EQ(res[0], 0);
    EXPECT_EQ(res[1], 6);
    */
}
