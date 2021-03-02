#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<int> s1{1,2,1};
    auto x = s.nextGreaterElement(s1);
    for(int xx: x)
        cout<<xx<<" ";
}
