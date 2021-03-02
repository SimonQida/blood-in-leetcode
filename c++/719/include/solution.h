#include<iostream>
using namespace std;

template<typename T>
class Maxheap{
    private:
        int size;
        vector<T> heapData;
    public:
        Maxheap(int k):size(k+1){
            heapData.reserve(k+1);
            heapData.push_back(T());
        }

        void upper(int index){
            if(index == 1)
                return;

            int upperindex = index/2;
            if(heapData[upperindex].val < heapData[index].val){
                swap(heapData[upperindex], heapData[index]);
                upper(upperindex);
            }
        }

        void down(int index){
            int downIndex = index * 2;
            if(downIndex >= size){
                return ;
            }
            if(downIndex + 1 < size)
                if(heapData[downIndex].val < heapData[downIndex + 1].val){
                    ++downIndex;
                }

            if(heapData[index].val < heapData[downIndex].val){
                swap(heapData[index], heapData[downIndex]);
                down(downIndex);
            }
        }

        void push(T t){
            if(heapData.size() >= size){
                // check the top and replace
                if(t.val < heapData[1].val){
                    heapData[1] = t;
                    down(1);
                }

            }
            else{
                heapData.push_back(t);
                upper(heapData.size()-1);
            }
            //printself();
        }
        void printself(){
            cout<<"one line buf message: ";
            for(int i =0; i < heapData.size(); ++i)
                cout<<heapData[i].val<<" ";
            cout<<endl;
        }

        int top(){
            return heapData[1].val;

        }
};

class Solution {
public:
    struct distance{
        int val;
    };

    int smallestDistancePair(vector<int>& nums, int k) {

        Maxheap<distance> buf(k);
        distance dt;
        for(int i =0; i < nums.size(); ++i){
            for(int j =i+1; j < nums.size(); ++j){
                //cout<<nums[i]<<" "<<nums[j]<<endl;
                dt.val = abs(nums[i]-nums[j]);
                buf.push(dt);
            }
        }

        return buf.top();
    }
private:
};
