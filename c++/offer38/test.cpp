#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<string> vs = s.permutation("abcee");
    for(int i =0; i < vs.size(); ++i){
        cout<<vs[i]<<endl;
    }

}
