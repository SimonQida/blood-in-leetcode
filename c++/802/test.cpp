#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    vector<vector<int> > data = {{1,2}, {2,3}, {5}, {0}, {5}, {}, {}};
    Solution s;
    vector<int> x = s.eventualSafeNodes(data);
    for( int a : x){
        cout<<a<<endl;
    }
    
}
