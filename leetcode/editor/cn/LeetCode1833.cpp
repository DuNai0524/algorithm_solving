#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        if(coins < costs[0])return 0;
        int ans = 0;
        for(int i =0 ;i<costs.size() && coins > 0;i++) {
            if(coins - costs[i] >= 0 ) {
                ans++;
                coins -= costs[i];
            }else {
                break;;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
