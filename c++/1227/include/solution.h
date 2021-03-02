class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        double initVal = 1;
        double resSum =  initVal/ n;
        for(int i = n-1; i > 1; --i){
            resSum = resSum * (i+1) / i;
        }
        return resSum;
    }
};
