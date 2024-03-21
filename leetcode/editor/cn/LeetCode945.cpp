#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0, taken = 0;
        for (int i = 1; i < (int)nums.size(); ++i) {
            if (nums[i - 1] == nums[i]) {
                taken++;
                ans -= nums[i];
            } else {
                int give = min(taken, nums[i] - nums[i - 1] - 1);
                ans += give * (give + 1) / 2 + give * nums[i - 1];
                taken -= give;
            }
        }

        if (nums.size() > 0) {
            ans += taken * (taken + 1) / 2 + taken * nums.back();
        }

        return ans;
    }
};



//leetcode submit region end(Prohibit modification and deletion)

int main() {
    Solution s;
}