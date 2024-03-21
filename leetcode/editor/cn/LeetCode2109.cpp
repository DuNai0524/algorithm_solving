#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int idx = 0;
        for(int i = 0; i < s.size();i ++) {
            if(idx < spaces.size()) {
                if(i!=spaces[idx]) {
                    ans += s[i];
                }else {
                    ans += ' ';
                    idx++;
                    ans+= s[i];
                }
            }else {
                ans += s[i];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
