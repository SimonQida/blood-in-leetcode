#include<vector>
#include<algorithm>

using std::vector;
using std::pair;
using std::make_pair;

template <typename T>
class maxHeap{
    typedef vector<T> dT;
    public:
        maxHeap(int num):size(num){

        }

        ~maxHeap(){
            for(int i =0; i < buf.size(); ++i)
                std::cout<<buf[i]<< " ";
        }

        dT findK(dT input){
            assign(dT(input.begin(), input.begin()+size));
            for(int i = size; i < input.size(); ++i){
                checkCur(input[i]);
            }
            return buf;
        }

        void checkCur(T cur){
            std::cout<<"check Cur data: "<<cur<<std::endl;
            if(cur >= buf[1])  
                return ;
            buf[1] = cur;
            downToFin(1);
        }

    //private:
        void assign(const dT& target){
            buf.assign(target.begin(), target.end());
            buf.insert(buf.begin(), 0);
            for(int i = buf.size()-1; i > 0; --i)
                up(i);
        }

        void up(int index){
            if(index == 1)
                return;
            if(buf[index/2] < buf[index]) 
                downToFin(index/2);
            return;
        }

        void downToFin(int index){
            int ret = index;
            while(ret > 0){
                ret = down(ret);
            }
            return ;
        }

        int down(int index){
            if(index == 0) 
                throw 1;
            int left = index * 2, right = index * 2 + 1;
            if(left <= buf.size()){
                if(buf[index] < buf[left]){
                    std::swap(buf[index], buf[left]);
                    return left;
                }
            }

            if(right <= buf.size()){
                if(buf[index] < buf[right]){
                    std::swap(buf[index], buf[right]);
                    return right;
                }
            }
            return -1;
        }

        dT buf;
        int size;
};

class Solution {
    typedef vector<pair<int, int>> pairVec;
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        typedef  maxHeap<int> maxHi;
        vector<int> result(k);
        pairVec res = getSoldiersVec(mat);
        stable_sort(res.begin(), res.end(), compare_as_pair);
        for(int i =0; i < k; ++i)
            result[i] = res[i].first;
        return result;
    }

    static bool compare_as_pair(pair<int, int>p1, pair<int, int> p2){
        return p1.second < p2.second;
    }

    pairVec getSoldiersVec(const vector<vector<int>> &mat){
        pairVec res(mat.size());
        for(int index = 0; index < mat.size(); ++index){
            res[index] = make_pair(index, findZero(mat[index]));
            std::cout<< res[index].first<<" : "<< res[index].second<<" "<<std::endl;
        }
        return res;
    }

    int findZero(const vector<int>& row){
        int count = 0;
        for(int i = 0; i < row.size(); ++i){
            if(row[i] == 0)
                return count;
            ++count;
        }
        return count;
    }

private:
    struct treeNode{
        int val;
        treeNode * left;
        treeNode * right;
    };
    treeNode * root;
};
