#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void getNext(int* next,const string& s) {
        int j = 0;
        next[0] = 0;
        for(int i = 1; i < s.size(); i++) {
            // 保证 j > 0 且不匹配时向前
            while( j > 0 && s[i] != s[j]) {
                j = next[j - 1];
            }
            if( s[i] == s[j] ) {
                j++;
            }
            next[i] = j;
        }
    }

    int strStr(string haystack, string needle) {
        if(needle.size()==0)return -1;
        int next[needle.size()];
        getNext(next,needle);
        // 求完 next 之后，开始模式串匹配
        int j = 0;
        for(int i = 0; i < haystack.size(); i++ ) {
            while( j > 0 && haystack[i] != needle[j]) {
                j = next[j - 1];
            }
            if( haystack[i] == needle[j] )j++;
            if(j == needle.size()) {
                return i - needle.size() + 1;
            }
        }

        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    Solution s;
    s.strStr("sadbutsad","sad");
}