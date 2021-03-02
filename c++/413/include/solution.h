#include<vector>
using std::vector;

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int res = 0;
        if(A.size() < 3)
            return res;
        int pace = A[1]-A[0], count = 2;
        for(int i = 2; i < A.size(); ++i){
            if(A[i] - A[i-1] == pace)
                ++count;
            else{
                pace = A[i] - A[i-1];
                if(count > 2)
                    res += (count-2) * (count-1) / 2;
                count = 2;
            }
        }
        if(count > 2)
            res += (count-2) * (count-1) / 2;
        return res;
    }
};
