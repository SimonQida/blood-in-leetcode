#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    typedef vector<int> dim1;
    typedef vector<vector<int>> dim2;
    dim2 data;
    dim1 data1 = {1,1,1,0,0};
    dim1 data2 = {1,1,1,0,0};
    dim1 data3 = {1,1,0,0,0};
    dim1 data4 = {1,0,0,0,0};

    data.push_back(data1);
    data.push_back(data2);
    data.push_back(data3);
    data.push_back(data4);
    Solution sol;
    vector<int> result = sol.kWeakestRows(data, 3);

    for(int i =0; i < result.size(); ++i){
        std::cout<<result[i]<< " ";
    }
    EXPECT_EQ(1, 1);
}
