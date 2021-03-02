#include<vector>

using namespace std;

class Solution {
public:
    void calMN(const string& str, int& m, int&n){
        m = n = 0;
        for(const char &c : str){
            (c == '0')? ++m: ++n;
        }
    }

    int findMaxForm(vector<string>& strs, int m, int n) {
        buf.clear();
        buf.assign(m+1, vector<int> (n+1, 0));
        int zeroM, zeroN = 0;
        for(int index = 0; index < strs.size(); ++index){
            calMN(strs[index], zeroM, zeroN);
            if(zeroM > 0){
                for(int i = m; i > -1; --i){
                    for(int j = n; j > -1; --j){
                        //update node
                        if(!(i-zeroM < 0 || j-zeroN < 0))
                            buf[i][j] = max(buf[i][j], buf[i-zeroM][j-zeroN]+1);
                    }
                }

            }
            else{
                for(int j = n; j > -1; --j)
                    for(int i = m; i >-1; --i){
                        if(!(i - zeroM < 0 || j - zeroN < 0))
                            buf[i][j] = max(buf[i][j], buf[i-zeroM][j-zeroN] + 1);
                    }
            }

            for(int i =0; i <= m; ++i){
                for(int j =0; j<=n; ++j)
                    cout<<buf[i][j]<<" ";
                cout<<endl;
            }
            cout<<endl;

        }

        return buf[m][n];
    }

    vector<vector<int> >  buf;
};
