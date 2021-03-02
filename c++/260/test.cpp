#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
}

TEST(TEST, TESTBASIC){
    Solution sol;
    vector<int> v1{1,2,3,1,2,5};
    vector<int> res = sol.singleNumber(v1);
    EXPECT_EQ(1, 1);
    EXPECT_EQ(res.size(), 2);
    std::cout<< res[1]<< " "<<res[0]<<std::endl;
}
