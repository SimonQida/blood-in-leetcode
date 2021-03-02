#include<iostream>
using namespace std;

class Solution {
public:
    int xx(char& c, int& decer, int& incer){
        if(decer > 0){
            c = '-';
            --decer;
            return 0;
        }
        else{
            ++incer;
            return 1;
        }

    }

    string predictPartyVictory(string senate) {

        int rBullet = 0, dBullet= 0;
        int rleft =0, dleft =0;
        while(1){
            rleft = dleft = 0;

            cout<<"origin: "<<senate<<endl;
            for(int i=0; i < senate.size(); ++i){
                if(senate[i] == 'R'){
                    rleft += xx(senate[i], rBullet, dBullet);
                }
                else if(senate[i] == 'D'){
                    dleft += xx(senate[i], dBullet, rBullet);
                }
            }
            cout<<"now: "<<senate<<endl;
            if(rleft ==0 || dleft ==0){
                if(rleft == 0)
                    return "Dire";
                else
                    return "Radiant";
            }
        }

    }
};
