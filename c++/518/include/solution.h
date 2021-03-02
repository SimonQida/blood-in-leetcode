#include<vector>
using namespace std;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> arr(amount+1, 0);
        arr[0] = 1;
        for(int i =0; i < coins.size(); ++i){
            for(int index = 0; index+ coins[i] <= amount ; ++index){
                arr[index + coins[i]] += arr[index];
                //arr[index] += arr[index - coins[i]];
            }

        }

        return arr[amount];
    }
};
