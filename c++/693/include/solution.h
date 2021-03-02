class Solution {
public:
    bool hasAlternatingBits(int n) {
        int tmp =n;
        int res = !(n & 1);
        int bitMax = 1;
        for(int i =1; i < 32; ++i){
            bitMax <<= 1;
            if(bitMax > tmp)
                break;
            n >>= 1;
            if(res != (n & 1))
                return false;

            res = !(n & 1);
        }
        return true;
    }
};
