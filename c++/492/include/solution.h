#include<vector>
#include <math.h>

using std::vector;
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int threholds = sqrt(area);
        for(int i = threholds; i > 0; --i)
            if( area % i == 0 )
                return vector<int>{area/i, i};
        return vector<int>{1,1};
    }
};
