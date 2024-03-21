#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        if(n == 1) {
            ans.push_back(0);
            return ans;
        }
        // 出度表
        vector<int> outdegree(n,0);
        // 记录每个节点的边
        vector<vector<int>> nodeedges(n,vector<int>());

        for(auto e:edges) {
            outdegree[e[0]]++;
            outdegree[e[1]]++;
            nodeedges[e[0]].push_back(e[1]);
            nodeedges[e[1]].push_back(e[0]);
        }

        // 建立队列，随后将入度为 1 的结点入队
        queue<int> q;
        for(int i = 0;i < n; i++) {
            if(outdegree[i] == 1)q.push(i);
        }

        // 随后遍历节点，开始慢慢往内部消去节点
        while (!q.empty()) {
            ans = vector<int>();
            int size = q.size();
            for(int i = 0;i < size;i ++) {
                int node = q.front();
                q.pop();
                ans.push_back(node);
                vector<int> neighbor = nodeedges[node];
                for(int n:neighbor) {
                    outdegree[n]--;
                    if(outdegree[n]==1) {
                        q.push(n);
                    }
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
