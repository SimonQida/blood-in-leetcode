#include "solution.h"
#include<iostream>
using namespace std;

int main(){
    vector<int> vi;
    vi.push_back(0);
    Solution sol;
    vector<int> res = sol.topKFrequent(vi, 2);
    cout<<res.size()<<endl;;
}
