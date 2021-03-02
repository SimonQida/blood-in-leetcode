#include <vector>
#include <queue>
#include<set>

using namespace std;
class Graph{
    public:
    void setGraph(const vector<vector<int> >& graphVector){
        int gsize = graphVector.size();
        graphData.assign(gsize, vector<int>());
        outDegree.assign(gsize, 0);
        for(int i =0; i < gsize; ++i){
            outDegree[i] = graphVector[i].size();
            for(int nodeIndex=0; nodeIndex < graphVector[i].size(); ++nodeIndex){
                graphData[graphVector[i][nodeIndex]].push_back(i);
            }
        }
    }

    vector<int> fetchupperNode(int toPoint){
        return graphData[toPoint];
    }

    vector<int> outDegree;
    vector<vector<int> > graphData;
};

class Solution {
public:
    set<int> result;
    Graph curGraph;
    queue<int> que;

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        curGraph.setGraph(graph);
        for(int i =0; i < curGraph.outDegree.size(); ++i){
            if (curGraph.outDegree[i] == 0)
                que.push(i);
        }

        while(!que.empty()){
            int curIndex = que.front();
            que.pop();
            result.insert(curIndex);
            vector<int> upperNodes = curGraph.fetchupperNode(curIndex);
            for(int node: upperNodes){
                if(--curGraph.outDegree[node] == 0){
                    que.push(node);
                }
            }

        }

        return vector<int>(result.begin(), result.end());
    }
};
