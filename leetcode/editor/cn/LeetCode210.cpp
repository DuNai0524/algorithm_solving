#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
        if(prerequisites.size()==0) {
            for(int i = 0;i<numCourses;i++)ans.push_back(i);
            return ans;
        }
        // 初始化一个入度数组
        vector<int> in_vec(numCourses,0);
        // 存储边
        vector<vector<int>> edges(numCourses,vector<int>());
        // 遍历一遍入度
        for(auto c:prerequisites) {
            in_vec[c[0]]++;
            edges[c[1]].push_back(c[0]);
        }
        // 遍历一边入度为 0 的点，加入到队列中
        deque<int> nodes;
        for(int i = 0;i <numCourses;i++) {
            if(in_vec[i]==0) {
                nodes.push_back(i);
                ans.push_back(i);
            }
        }
        // 遍历
        while(!nodes.empty()) {
            int u = nodes.front();
            nodes.pop_front();
            for(int v:edges[u]) {
                in_vec[v]--;
                if(in_vec[v] == 0) {
                    nodes.push_back(v);
                    ans.push_back(v);
                }
            }
        }
        if(ans.size() != numCourses)ans.clear();
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    vector<vector<int>> v;
    v.push_back(vector<int> ({1,0}));
    v.push_back(vector<int> ({2,0}));
    v.push_back(vector<int> ({3,1}));
    v.push_back(vector<int> ({3,2}));
    Solution s;
    s.findOrder(4,v);
}