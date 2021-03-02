#include<math.h>

class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i =0; (long)i * i <= (long)c; ++i){
            double res = sqrt(c - i * i);
            if(res == (int)res)
                return true;
        }

        return false;
    }
};
