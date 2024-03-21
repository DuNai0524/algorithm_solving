#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ret = 0, maxn = 0;
        for (auto num : nums) {
            maxn = max(maxn, num);
            while (num) {
                if (num & 1) {
                    ret++;
                }
                num >>= 1;
            }
        }
        if (maxn) {
            while (maxn) {
                ret++;
                maxn >>= 1;
            }
            ret--;
        }
        return ret;
    }
};

//leetcode submit region end(Prohibit modification and deletion)
