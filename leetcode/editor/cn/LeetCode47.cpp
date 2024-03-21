#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void backTrace(vector<int>& nums,int curIndex,vector<bool>& vis) {
        if(path.size() == nums.size()) {
            ans.push_back(path);
            return;
        }
        for(int i = 0;i<nums.size();i++) {
            if(vis[i] || (i > 0 && nums[i] == nums[i - 1]) && !vis[i - 1]) continue;
            path.push_back(nums[i]);
            vis[i] = true;
            backTrace(nums,i,vis);
            path.pop_back();
            vis[i] = false;
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<bool> vis(nums.size(),false);
        backTrace(nums,-1,vis);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
