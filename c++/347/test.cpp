#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
}

TEST(TEST, TESTONE){ 
    Solution sol; 
    vector<int> vi {1};
    sol.topKFrequent(vi, 1);
}

TEST(TEST, TESTBASIC){
    Solution sol;
    vector<int> vi {1,1,1,1,2,2,3};
    vector<int> res = sol.topKFrequent(vi, 2);
    EXPECT_EQ(res.size(), 2);
    EXPECT_EQ(res[0], 1);
    EXPECT_EQ(res[1], 2);
}
