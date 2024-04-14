#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2)return 0;
        sort(nums.begin(), nums.end());
        int max_gap = INT_MIN;
        for(int i = 1;i < nums.size(); i++) {
            max_gap = max(max_gap,nums[i] - nums[i - 1]);
        }
        return max_gap;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}