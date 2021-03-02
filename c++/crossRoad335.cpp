#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int gettar(vector<int>& data, int & xdual, int & ydual){
        int diff1 = data[2]- data[0];
        int diff2 = data[3]- data[1];
        xdual = data[2];
        ydual =data[3];
        if (diff1 > 0 && diff2 > 0)
            return 1;
        else if ((diff1 <=0 && diff2 <0) || diff1 >0 && diff2<0)
            return 0;
        else if (diff1> 0 && diff2 == 0){
            xdual = diff1;
            return 0;
        }
        return -1;
    }

    bool isSelfCrossing(vector<int>& x) {
        int tar = -1;
        int xdual, ydual;
        if (x.size() <4)
            return false;
        else 
            tar = gettar(x,xdual, ydual);
        if (tar == -1)
            return true;
        cout<< xdual << " "<<ydual<<endl;

        // bigger is 1 , less is 0
        //int tar = x[0] < x[2] ? 1 : 0;
        for(int i =2; i<x.size() / 2; ++i){
            int index = 2*i;
            if ((x[index] < xdual && x[index+1] <ydual && tar == 0) || (x[index] > xdual && x[index+1] >ydual && tar == 1) ){
                xdual = x[index];
                ydual = x[index+1];
            }
            else 
                return true;
        }

        if (x.size() % 2){
            if ((x[x.size()-1] < xdual && tar == 0) || (x[x.size()-1] > xdual && tar == 1))
                ;
            else return true;
        }
        return false;
    }
};

int main(){
    int buf[] = {3,3,4,2,2};
    vector<int> data(buf,buf+5);
    cout<<Solution().isSelfCrossing(data);
}
