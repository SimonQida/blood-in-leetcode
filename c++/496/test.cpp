#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<int> s1{4,1,2}, s2{1,3,4,2};
    auto x = s.nextGreaterElement(s1, s2);
    for(int xx: x)
        cout<<xx<<" ";
}
