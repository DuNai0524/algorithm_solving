#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 回溯模板
    int ans = 0;
    vector<bool> vis;
    void backTrace(vector<int>& nums,int left,int right,int target,int sum){
        if(left >= right){
            ans = max(ans,sum);
            return;
        }

        if(vis[left] && vis[right]) return;

        if()

    }

    int maxOperations(vector<int>& nums) {
        int n = nums.size();
        vis.resize(n,false);
        // 第一个和最后一个元素
        backTrace(nums,0,n - 1,nums[0] + nums[n - 1],0);
        backTrace(nums,0,1,nums[0]+nums[1],0);
        backTrace(nums,n - 2, n - 1, nums[n - 2] + nums[n - 1],0);
    }
};
//leetcode submit region end(Prohibit modification and deletion)
