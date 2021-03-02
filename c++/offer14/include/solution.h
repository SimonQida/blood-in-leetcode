#include<vector>

using namespace std;

class Solution {
public:
    int cuttingRope(int n){
        if(n < 4)
            return n-1;

        int tmp;
        vector<int> buf(n+1, 0);
        buf[1] = 1;
        for(int i =2; i <= n; ++i){
            tmp = i;
            for(int j = 1; j < i; ++j){
                tmp = max(j * buf[i-j], tmp);
            }
            buf[i] = tmp;
        }
        return buf[n];
    }

};
