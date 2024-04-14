#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(is_sorted(nums.begin(), nums.end()))return 0;
        vector<int> sorted(nums);
        // 排序完之后比对
        sort(sorted.begin(), sorted.end());

        int left = 0, right = nums.size() - 1;
        while(nums[left] == sorted[left]) left++;
        while(nums[right] == sorted[right]) right --;
        return right - left + 1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}