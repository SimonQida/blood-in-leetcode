#include<vector>
#include<stack>

using namespace std;

class Solution {
    public:
        vector<int> dailyTemperatures(vector<int>& nums) {
            int arrSize = nums.size();
            vector<int> res(arrSize, 0);
            for(int i = nums.size() - 1; i > -1; --i){
                while(!s.empty() && nums[s.top()] <= nums[i]){
                    s.pop();
                }

                if(!s.empty()){
                    res[i] = s.top() - i;
                }
                s.push(i);
            }

            return res;
        }

        stack<int> s;
};
