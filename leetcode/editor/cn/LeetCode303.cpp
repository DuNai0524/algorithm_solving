#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class NumArray {
public:
    vector<int> prefix_sum;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix_sum.resize(n + 1);
        for(int i = 0;i < n;i ++) {
            prefix_sum[i + 1] = prefix_sum[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefix_sum[right + 1] - prefix_sum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
//leetcode submit region end(Prohibit modification and deletion)
