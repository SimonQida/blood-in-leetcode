#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    Solution sol;
    typedef vector<char> dim1;
    typedef vector<dim1> dim2;
    dim2 data;
    dim1 data1 = {'1','0','1','0','0'};
    dim1 data2 = {'1','0','1','1','1'};
    dim1 data3 = {'1','1','1','1','1'};
    dim1 data4 = {'1','0','0','1','0'};


    data.push_back(data1);
    data.push_back(data2);
    data.push_back(data3);
    data.push_back(data4);
    
    EXPECT_EQ(sol.maximalRectangle(data), 6);
    EXPECT_EQ(1, 1);
}
