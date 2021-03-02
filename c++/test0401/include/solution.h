#include<vector>

using namespace std;

class Solution {
public:
    bool findWhetherExistsPath(int n, vector<vector<int>>& graph, int start, int target) {
        father.assign(n, -1);
        father[start] =start;
        for(int i =0; i< graph.size(); ++i){
            //cout<<graph[i][0]<< " ->"<<graph[i][1]<<endl;
            if( graph[i][1] != start){
                father[graph[i][1]] = find(graph[i][0]);
            }
            //cout<<"father is :"<<father[graph[i][1]]<<endl;
            if(graph[i][1] == target && find(graph[i][1]) == start)
                return true;
        }
        //for(int i =0; i < father.size(); ++i)
            //cout<<father[i]<<" ";
        return false;
    }

    int find(int x){
        if(father[x] == -1)
            father[x] = x;

        if(father[x] != x)
            father[x] = find(father[x]);

        return father[x];
    }

private:
    vector<int> father;
};
