#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int ans = 0;

    void backTracking(vector<int>& nums,int target,int sum,int idx) {
        if(idx == nums.size()) {
            ans += sum == target? 1:0;
            return;
        }
        backTracking(nums,target,sum + nums[idx],idx + 1);
        backTracking(nums,target,sum - nums[idx],idx + 1);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        backTracking(nums,target,0,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
