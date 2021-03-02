#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for(int i =0;i <nums.size();++i){
            if (nums[i] != 0){
                nums[index] = nums[i];
                ++index ;
            }
        }
        for(int i = index; i < nums.size(); ++i)
            nums[i] = 0;
    }
};
void print(vector<int> expe){
    for (int i =0; i< expe.size(); ++i)
        cout<< expe[i]<< " ";
    cout<<endl;
}

int main(){
    int a[] = {0,1,0,3,12};
    vector<int> data(a, a+ sizeof(a) / sizeof(int));
    Solution().moveZeroes(data);
    print(data);
}
