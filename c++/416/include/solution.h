#include<vector>
using   namespace std;
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int &i: nums)
            sum += i;
        if(sum % 2 != 0)
            return false;

        sum /= 2;

        vector<bool> arr(sum+1, 0);
        arr[0] = 1;
        for(int i = 0; i < nums.size(); ++i){
            for(int index = sum; index > 0; --index){
                if( index -nums[i] >= 0)
                    arr[index] = arr[index] || arr[index - nums[i]];
            }
            for(int x =0; x < sum+1; ++x){
                cout<<arr[x]<<" ";
            }
            cout<<endl;
        }

        return arr[sum];
    }
};
