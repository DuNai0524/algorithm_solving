#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void backTraking(vector<vector<int>>& graph,int cur) {
        // 终止：走到终点了
        if(cur == graph.size() - 1 && !path.empty()) {
            ans.push_back(path);
        }

        for(int i:graph[cur]) {
            path.push_back(i);
            backTraking(graph,i);
            path.pop_back();
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        path.push_back(0);
        if(graph.size() <= 1) {
            path.push_back(1);
            ans.push_back(path);
            return ans;
        }
        backTraking(graph,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}