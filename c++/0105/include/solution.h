#include<iostream>
using namespace std;

class Solution {
public:
    bool oneEditAway(string first, string second) {
        int lenDiff = first.size() - second.size();
        if( abs(lenDiff) > 1)
            return false;

        int count =1;
        if(lenDiff == 0){
            for(int i =0; i < first.size(); ++i){
                if(first[i] != second[i]){
                    if(count <= 0)
                        return false;
                    --count;
                }
            }
        }
        else{
            string longer = second, shorter = first;
            if(lenDiff > 0){
                longer = first;
                shorter = second;
            }

            for(int i=0, j =0; i < shorter.size(); ++i, ++j){
                if(longer[j] != shorter[i]){
                    if(count <= 0)
                        return false;
                    --count;
                    --i;
                }
            }

        }

        return true;
    }
};
