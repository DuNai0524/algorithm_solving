#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int,int> numMap;
        for(int i = 1 ; i <= n * n; i++)numMap[i] = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
                numMap[grid[i][j]]++;
        }
        vector<int> ans(2,0);
        for(auto p:numMap){
            if(p.second == 2)ans[0] = p .first;
            else if (p.second == 0)ans[1] = p.first;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
