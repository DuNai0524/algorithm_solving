#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0,r = nums.size() - 1;
        while(l < r) {
            int mid = l + (r - l) / 2;
            if(nums[mid] < nums[r]) {
                r = mid;
            }else {
                l = mid + 1;
            }
        }
        return nums[l];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}