#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int twoEggDrop(int n) {
        vector<vector<int>> dp(2,vector<int>(n + 1,INT_MAX));
        // 初始化
        dp[0][0] = 0;
        dp[1][0] = 0;
        for(int j = 1; j <= n; j++) {
            dp[0][j] = j;
        }

        for(int i = 1;i <= n;i++) {
            for(int j = 1;j <= i;j++) {
                dp[1][i] = min(dp[1][i],max(dp[0][j-1]+1,dp[1][i - j] + 1));
            }
        }

        return dp[1][n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)
