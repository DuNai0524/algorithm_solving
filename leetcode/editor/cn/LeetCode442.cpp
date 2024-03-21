#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 原地哈希
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0;i < n; i++) {
            while(nums[i] != nums[nums[i] - 1]) {
                swap(nums[i],nums[nums[i] - 1]);
            }
        }
        for(int i = 0;i<n;i++) {
            if(nums[i] - 1 != i)ans.push_back(nums[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
