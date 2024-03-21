#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(int n) {
        int ret = 0, avg = n;
        for (int i = 0; i < n; i++) {
            int x = 2 * i + 1;
            if (x > n) {
                ret += x - n;
            }
        }
        return ret;
    }
};

//leetcode submit region end(Prohibit modification and deletion)
