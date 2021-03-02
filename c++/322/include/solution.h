#include<vector>
#include<algorithm>
#include<climits>


using std::vector;

class SolutionDp {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> amountSlot(amount+1, INT_MAX);
        amountSlot[0] = 0;
        int ret = 0;
        if(amount == 0)
            ret = 0;
        else if(amount < 0)
            ret = -1;
        else{
            huntDown(coins, amountSlot);
            ret = amountSlot.back() == INT_MAX ? -1 : amountSlot.back();
        }
        return ret;
    }

private:
    void huntDown(const vector<int>& coins, vector<int>& stepSlot){
        for(int i = 0; i < stepSlot.size(); ++i){
            if(stepSlot[i] == INT_MAX)
                continue;
            else{
                for(const int& coin: coins){
                    if(long(i)+coin < stepSlot.size()){
                        stepSlot[i+coin] = stepSlot[i+coin] > stepSlot[i] + 1 ? stepSlot[i] + 1 : stepSlot[i+coin];
                        //stepSlot[i+coin] = min(stepSlot[i+coin] > stepSlot[i] + 1);
                    }
                }
            }
        }
    }
};

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        std::sort(coins.begin(), coins.end());
        minAmount(coins, amount, 0, coins.size()-1);
        return minsteps == INT_MAX ? -1 : minsteps;
    }

private:
    int minsteps = INT_MAX;
    void minAmount(const vector<int>& leftCoins, int leftNum, int steps, int index){
        int newSteps = leftNum / leftCoins[index];
        if(leftNum < 0 || newSteps + steps > minsteps)
            return;
        if(leftNum % leftCoins[index] == 0){
            minsteps = minsteps > newSteps + steps ? newSteps + steps : minsteps; 
            return;
        }
        else{
            for(int i = newSteps ; i >= 0; --i){
                if(index -1 >= 0)
                    minAmount(leftCoins, leftNum - leftCoins[index] * i, i + steps, index-1);
            }

        }
        return;
    }
};
