#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ret = 0;
        for(int i = 0;i < 32;i ++) {
            if(n & ( 1 << i)) {
                ret ++;
            }
        }
        return ret;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}