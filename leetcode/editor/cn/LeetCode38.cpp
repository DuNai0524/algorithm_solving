#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string countAndSay(int n) {
        string prev = "1";
        for(int i = 2; i <= n; i++) {
            string cur = "";
            int start = 0;
            int pos = 0;
            while (pos < prev.size()) {
                while (pos < prev.size() && prev[pos] == prev[start]) {
                    pos++;
                }
                cur += to_string(pos - start) + prev[start];
                start = pos;
            }
            prev = cur;
        }
        return prev;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
