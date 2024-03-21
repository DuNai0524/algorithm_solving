#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int h = 0, i = citations.size() - 1;
        while (i >= 0 && citations[i] > h) {
            h++;
            i--;
        }
        return h;
    }
};

//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> v({3,0,6,1,5});
    s.hIndex(v);
}