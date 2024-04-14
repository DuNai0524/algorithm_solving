#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(char c : s) {
            if(isalnum(c)) {
                t += tolower(c);
            }
        }
        string t_reverse(t.rbegin(),t.rend());
        return t == t_reverse;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}