#include<vector>
#include<stack>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        for(int i = nums2.size()-1; i > -1; --i){
            while(!s.empty() && s.top() < nums2[i]){
                s.pop();
            }

            result[nums2[i]] = -1;
            if(!s.empty()){
                result[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }

        vector<int> res;
        for(int i =0; i < nums1.size(); ++i){
            res.push_back(result[nums1[i]]);
        }

        return res;
    }

    stack<int> s;
    unordered_map<int, int> result;
};
