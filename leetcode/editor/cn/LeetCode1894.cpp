#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        vector<long long> prefix_sum(n,0);
        prefix_sum[0] = chalk[0];
        for(int i = 1;i < n;i ++) {
            prefix_sum[i] = prefix_sum[i - 1] + chalk[i];
        }
        // 开始
        int ans = 0;
        if(k % prefix_sum[n - 1] == 0) {
            ans = 0;
        }else {
            k %= prefix_sum[n - 1];
            for(int i = n - 1; i>=0;i--) {
                if(prefix_sum[i] <= k) {
                    ans = i+1;
                    break;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
