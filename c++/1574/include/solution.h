#include<stack>
#include<iostream>
using namespace std;

class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {

        for(int i =arr.size()-1; i >=0; --i){
            if(si.size() && arr[i] > si.top()){
                break;
            }

            si.push(arr[i]);
        }

        int leftMax = si.size();
        for(int i =0; i < arr.size(); ++i){
            if(i !=0 && arr[i] < arr[i-1])
                break;

            if(si.size() + i == arr.size()){
                leftMax = arr.size();
                break;
            }

            while(si.size() && si.top() <arr[i])
                si.pop();
            
            leftMax = max(leftMax, int(i+1 + si.size()));
        }

        return arr.size() - leftMax;
    }

    stack<int> si;
};
