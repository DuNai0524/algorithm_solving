#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        queue<string> qu;
        qu.emplace("");
        while (!qu.empty()) {
            string &curr = qu.front();
            if (curr.size() == s.size()) {
                ans.emplace_back(curr);
                qu.pop();
            } else {
                int pos = curr.size();
                if (isalpha(s[pos])) {
                    string next = curr;
                    next.push_back(s[pos] ^ 32);
                    qu.emplace(next);
                }
                curr.push_back(s[pos]);
            }
        }
        return ans;
    }
};

//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}