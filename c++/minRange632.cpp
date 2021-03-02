#include<iostream>
#include<vector>
#include<map>
using namespace std;

using MAP = multimap<int, pair<int, int> >;
using DOUBLEPAIR = pair<int, pair<int,int> >;
using PAIR =  pair<int,int>;
void listPrint(vector<vector<int> >& nums){
    for (int i=0; i< nums.size();++i){ for (int j =0; j < nums[i].size(); ++j)
            cout<<nums.at(i).at(j)<<" ";
        cout<<endl;
    }
}

void listBucket(MAP& bucket){
    for( auto itr = bucket.begin(); itr != bucket.end(); ++itr)
        cout<< itr->first<<" "<< itr->second.first<<endl;
    cout<<"~~~"<<endl;
}

class Solution {
    // bucket
    private:
        MAP bucket;
        int min, max;
        vector<int> result;

        bool forward(const vector<vector<int> >& nums){
            int current = (bucket.end()-1).first -  bucket.begin().first;
            for (auto itr = bucket.begin(); itr!= bucket.end(); ++itr ){
                int bucketNum = itr->second.first;
                int index = itr->second.second;
                if (nums[bucketNum].size() <= index + 1)
                    continue;

            }
        //return 0 when  done
            return 0;
        }

    public:
        vector<int> smallestRange(vector<vector<int> >& nums) {
            for (auto itr = nums.begin(); itr != nums.end();++itr){
                bucket.insert(DOUBLEPAIR(itr->at(0), PAIR(itr- nums.begin(),0)));
            }
            //listBucket(bucket);
            //listPrint(nums);
            while(forward(nums)){   
    ;//to log 
                cout<<min<<" "<<max<<endl;
            }

            result.push_back(min);
            result.push_back(max);
            return result;
        }
};


int main(){
    vector<vector<int> > nums ;
    int a[] = {0,23,40,100};
    int b[] = {20,30,40};
    nums.push_back(vector<int>(a,a+ 4));
    nums.push_back(vector<int>(b,b+3));
    Solution().smallestRange(nums);
}
