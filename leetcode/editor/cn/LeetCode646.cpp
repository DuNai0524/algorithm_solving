#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b) {
        if( a[1] == b[1])return a[0] < b[0];
        return a[1] < b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(),cmp);
        int ans = INT_MIN;
        for(int j = 0;j < pairs.size(); j++) {
            int right = pairs[j][1];
            int cnt = 1;
            for(int i = j + 1;i < pairs.size(); i++) {
                if ( right < pairs[i][0]) {
                    cnt ++;
                    right = pairs[i][1];
                }
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}