#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // 回溯
    void dfs(vector<vector<pair<int,int>>>& nodes,vector<int>& ans,int curNode,int startNode,int preNode,int curSum,int singnalSpeed) {
        for(auto & node : nodes) {
            for(pair<int,int> p:node) {
                int nextNode = p.first;
                int val = p.second;
                if(preNode != nextNode) {
                    if(curSum %)
                    dfs(nodes,ans,nextNode,startNode,curNode,curSum + val,singnalSpeed);
                }
            }
        }
    }

    vector<int> countPairsOfConnectableServers(vector<vector<int>>& edges, int signalSpeed) {
        int n = edges.size() + 1;
        vector<vector<pair<int,int>>> nodes(n);
        vector<int> ans(n,0);
        for(int i=0;i< n - 1; i++) {
            int x = edges[i][0];
            int y = edges[i][1];
            int val = edges[i][2];
            pair<int,int> t1(x,val),t2(y,val);

            nodes[x].push_back(t1);
            nodes[y].push_back(t2);
        }

        for(int i=0;i<n;i++) {
            dfs(nodes,ans,i,i,0,signalSpeed);
        }

        return ans;
    }
};

int main() {
    Solution s;
}

