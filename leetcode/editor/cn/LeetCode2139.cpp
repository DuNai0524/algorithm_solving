#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ans = 0;
        while (maxDoubles && target != 1) {
            ++ans;
            if (target % 2 == 1) {
                --target;
            }
            else {
                --maxDoubles;
                target /= 2;
            }
        }
        ans += (target - 1);
        return ans;
    }
};

//leetcode submit region end(Prohibit modification and deletion)
