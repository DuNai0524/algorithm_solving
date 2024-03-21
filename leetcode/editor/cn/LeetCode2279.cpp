#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        int ans = 0;
        for(int i = 0;i < n;i ++) {
            capacity[i] -= rocks[i];
            if(capacity[i]==0)ans++;
        }
        sort(capacity.begin(), capacity.end());
        for(int i = 0;i < n && additionalRocks > 0;i++) {
            if(capacity[i]!=0 && additionalRocks >= capacity[i]) {
                additionalRocks -= capacity[i];
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
