#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0,r = nums.size() - 1;
        while(l < r) {
            int m = l + (r - l) / 2;
            if(nums[m] > nums[m + 1] ) {
                r = m;
            }else{
                l = m + 1;
            }
        }
        return  l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}