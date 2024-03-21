#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int l = 0,r = n;
        while(l < r) {
            int mid = (l + r + 1) / 2;
            if(check(citations,mid)) l = mid;
            else r = mid - 1;
        }
        return r;
    }

    bool check(vector<int>& citatioins,int x) {
        int cnt = 0;
        for(int c:citatioins) {
            if (c >= x) cnt++;
        }
        return cnt >= x;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}