#include<iostream>
#include "gtest/gtest.h"
#include "solution.h"

TEST(TEST, TESTforGTEST){
    EXPECT_EQ(1, 1);
    Solution s;
    vector<vector<int> > data{{4,3,1}, {3,2,4}, {3}, {4}, {}};
    vector<vector<int> >result = s.allPathsSourceTarget(data);
    EXPECT_EQ(result.size(), 5);
    for(int i =0; i < result.size(); ++i){
        for(int j =0; j < result[i].size(); ++j)
            cout<<result[i][j]<< " ";
        cout<<endl;
    }
}
