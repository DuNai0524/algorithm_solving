#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> prefix_sum(nums.size(),0);
        prefix_sum[0] = nums[0];
        for(int i = 1; i < prefix_sum.size() ; i++) {
            prefix_sum[i] = prefix_sum[i - 1] + nums[i];
        }
        return prefix_sum;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}