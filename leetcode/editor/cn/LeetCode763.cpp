#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        // 计数，然后统计区间，如果某个字符为0，就可以加入到ans中
        vector<int> char_count(26,0);
        for(auto c:s) {
            char_count[c]++;
        }

        for(int i = 0; i < s.size(); i++) {
            char_count[s[i]]--;

        }

    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}