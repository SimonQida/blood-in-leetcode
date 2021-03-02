
using namespace std;
class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int maxAbc = max(a, max(b, c));
        int sum = a + b + c;
        int res = 0; 

        if(maxAbc * 2 > sum){
            res = sum - maxAbc;
        }
        else{
            res = sum / 2;
        }

        return res;
    }
};
