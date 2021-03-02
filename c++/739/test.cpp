#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<int> data{73, 74, 75, 71, 69, 72, 76, 73};

    auto x = s.dailyTemperatures(data);
    for(int xx:x){
        cout<<xx<<" ";
    }
}
