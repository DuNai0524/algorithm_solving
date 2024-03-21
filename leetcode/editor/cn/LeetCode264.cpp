#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int nthUglyNumber(int n) {
        int a = 0, b = 0, c = 0;
        int res[n];
        res[0] = 1;
        for(int i = 1; i < n; i++) {
            int n2 = res[a] * 2, n3 = res[b] * 3, n5 = res[c] * 5;
            res[i] = min(min(n2, n3), n5);
            if (res[i] == n2) a++;
            if (res[i] == n3) b++;
            if (res[i] == n5) c++;
        }
        return res[n - 1];
    }
};

//leetcode submit region end(Prohibit modification and deletion)
