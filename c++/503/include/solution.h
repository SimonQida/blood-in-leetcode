#include<vector>
#include<stack>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums) {
        int arrSize = nums.size();
        vector<int> res(arrSize, -1);
        for(int i = nums.size()*2 - 1; i > -1; --i){
            while(!s.empty() && s.top() <= nums[i%arrSize]){
                s.pop();
            }

            if(!s.empty()){
                res[i%arrSize] = s.top();
            }
            s.push(nums[i%arrSize]);
        }

        return res;
    }

    stack<int> s;
};
