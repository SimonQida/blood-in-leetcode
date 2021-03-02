#include<vector>
using std::vector;

class Solution {
public:
    int numTeams(vector<int>& rating){
        vector<int> down(rating.size(), 0), up(rating.size(), 0);
        int sum = 0;
        for(int i = rating.size()-1; i > -1; --i){
            int currentqDown = 0;
            int currentqUp= 0;

            for(int j = i+1; j < rating.size(); ++j){
                //down
                if(rating[i] > rating[j]){
                    sum += down[j];
                    ++currentqDown;
                }
                else{
                    sum += up[j];
                    ++currentqUp;
                }
            }
            down[i] = currentqDown;
            up[i] = currentqUp;
        }
        return sum;
    }
};
