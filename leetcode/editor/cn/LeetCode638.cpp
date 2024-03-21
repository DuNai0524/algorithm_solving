#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int ans = 0;
    void backTracking(vector<int>& needs,vector<int>& price,vector<vector<int>>& special,int sum) {
        // 先买大礼包

        // 所有操作结束之后再更新 ans 的值
        ans = max(ans,sum);
    }

    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}