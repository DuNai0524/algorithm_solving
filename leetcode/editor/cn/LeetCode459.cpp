#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void getNext(int* next,const string& s) {
        next[0] = 0;
        int j = 0;
        for(int i = 1; i < s.size(); i++) {
            while( j > 0 && s[i] != s[j] ) {
                j = next[j - 1];
            }
            if(s[i] == s[j])j++;
            next[i] = j;
        }
    }
    bool repeatedSubstringPattern(string s) {
        if (s.size() == 0)return false;
        int n = s.size();
        int next[n];
        getNext(next,s);
        if(next[n - 1] != 0 && n % (n - (next[n - 1])) == 0) {
            return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    Solution s;
    s.repeatedSubstringPattern("abac");
}