#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if(n < 3)return false;
        int first = nums[0], second = INT_MAX;
        for(int i = 1; i < n;i ++) {
            int num = nums[i];
            if(num > second)return true;
            else if (num > first) {
                second = num;
            }else {
                first = num;
            }
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}