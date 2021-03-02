#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target = graph.size()-1;
        vector<int> buf ;
        dfs(graph, 0, buf);
        return result;
    }

    void dfs(const vector<vector<int>>& graph, int index, vector<int>& buf){
        buf.push_back(index);
        
        if(index == target){
            result.push_back(buf);
            return;
        }

        if(graph[index].size() == 0){
            return;
        }

        for(int i =0; i < graph[index].size(); ++i){
            dfs(graph, graph[index][i], buf);
            buf.pop_back();
        }
    }

private:
    vector<vector<int> > result;
    int target;
};
