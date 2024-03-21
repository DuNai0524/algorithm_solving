#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,0));
        dp[0][0] -= prices[0];
        for(int i = 1;i < n;i ++) {
            dp[i][0] = max(dp[i - 1][0],dp[i - 1][1] - prices[i]);
            dp[i][1] = max(dp[i - 1][1],dp[i - 1][0] + prices[i] - fee);
        }
        return max(dp[n - 1][0],dp[n - 1][1]);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}