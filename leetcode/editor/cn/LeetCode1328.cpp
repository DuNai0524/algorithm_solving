#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1)return "";
        // 遇到不是 a 的就换，反正已经是回文串了
        int mid = palindrome.size() / 2;
        for(int i = 0;i<mid;i++) {
            if(palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[palindrome.size() - 1] = 'b';
        return palindrome;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
