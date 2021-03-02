#include<stack>
#include<vector>

using std::stack;
using std::vector;
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int res = 0;
        for(int i = 0; i < matrix.size(); ++i){
            if(i!= 0){
                for(int j = 0; j < matrix[0].size(); ++j)
                    matrix[0][j] = (matrix[i][j] == '0')? '0':matrix[0][j] + matrix[i][j] - '0';
            }
            res = std::max(res, getMaxSize(matrix[0]));
        }
        return res;
    }

    int getMaxSize(const vector<char> &row){
        stack<int> s;
        int i = 0;
        int tmp, cur;
        int ans = 0;
        while(i < row.size()){
            if(s.empty() || row[s.top()] <= row[i])
                s.push(i++);
            else{
                tmp = s.top();
                s.pop();
                cur = (row[tmp] - '0') * (s.empty()? i : i - s.top() -1 );
                ans = std::max(ans, cur);
            }
        }
        while(!s.empty()){
            tmp = s.top();
            s.pop();
            cur = (row[tmp] - '0') * (s.empty()? i : i - s.top() -1 );
            ans = std::max(ans, cur);
        }
        return ans;
    }
};
