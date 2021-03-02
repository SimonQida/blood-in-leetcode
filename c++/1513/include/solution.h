#include<math.h>
class Solution {
public:
    int numSub(std::string s){
        int count = 0, result = 0;
        for(char c : s){
            if(c == '0'){
                if(count > 0){
                    result = modAdd(result, count);
                    count = 0;
                }
            }
            else{
                ++count;
            }
        }

        return modAdd(result, count);
    }

    int modAdd(long result, long count){
        int modBase = pow(10, 9)+ 7;
        return (result + (count *(count+1) / 2 % modBase)) % modBase;
    }
};
