#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int ans = 0;

    // 回溯构造，去重
    void backTracking(int n,int pos,vector<bool>& used) {
        if(pos > n) {
            ans ++;
            return;
        }

        for(int i = 1;i <= n;i++) {
            if(used[i] == false && (i % pos == 0 || pos % i == 0)) {
                used[i] = true;
                backTracking(n, pos + 1, used);
                used[i] = false;
            }
        }
    }

    int countArrangement(int n) {
        // 使用 used 数组去重
        vector<bool> used(n,false);
        backTracking(n,1,used);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    Solution s;
    s.countArrangement(2);
}