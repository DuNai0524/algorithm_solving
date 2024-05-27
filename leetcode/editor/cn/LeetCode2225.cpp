#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,pair<int,int>> count_map;
        unordered_set<int> num_set;
        // 统计输了的次数
        for(vector<int> v:matches){
            count_map[v[0]].first++;
            count_map[v[1]].second++;
        }
        vector<int> count0;
        vector<int> count1;
        for(auto p:count_map){
            if(p.second.second == 0)count0.push_back(p.first);
            else if (p.second.second == 1)count1.push_back(p.first);
        }
        sort(count0.begin(), count0.end()),sort(count1.begin(), count1.end());
        vector<vector<int>> ans;
        ans.push_back(count0);
        ans.push_back(count1);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
