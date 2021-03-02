#include<math.h>
class Solution {
public:
    bool reorderedPowerOf2(int N) {
        int inputLen = getLen(N);
        int base = 1;
        for(int i = 0; i < 31; ++i){
            if (isMatched(N, inputLen, i))
                return true;
            base <<= 1;
        }
        return isPowerOf2(N);
    }

    bool isMatched(int input, int inputLen, int powNum){
        int powNumber = pow(2, powNum);
        int powLen = getLen(powNumber);
        if (powLen != inputLen)
            return false;
        int data[10] = {0};
        while(input){
            ++data[input%10];
            input /= 10;
        }
        while(powNumber){
            --data[powNumber%10];
            powNumber /= 10;
        }
        for(int i = 0; i < 10; ++i){
            if (data[i] != 0)
                return false;
        }
        return true;
    }

    int getLen(int number){
        int len = 0;
        while(number){
            number /= 10;
            ++len;
        }
        return len;
    }

    bool isPowerOf2(int reorderedN){
        int target = 1;
        for(int i = 0; i < 31; ++i){
            if ((reorderedN ^ target) == 0)
                return true;
            target<<=1;
        }
        return false;
    }
};
