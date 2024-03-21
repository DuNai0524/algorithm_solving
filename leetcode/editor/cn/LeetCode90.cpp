#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    // 回溯算法
    void backTrace(vector<int>& nums,int startIndex,vector<bool>& used) {
        ans.push_back(path);
        // 不比nums大就可以加进去
        for(int i = startIndex;i<nums.size();i++) {
            if( i> 0 && nums[i] == nums[i - 1] && used[i - 1] == false) {
                continue;
            }
            path.push_back(nums[i]);
            used[i] = true;
            backTrace(nums,i + 1,used);
            used[i] = false;
            path.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<bool> used(nums.size(),false);
        sort(nums.begin(), nums.end());
        backTrace(nums,0,used);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
