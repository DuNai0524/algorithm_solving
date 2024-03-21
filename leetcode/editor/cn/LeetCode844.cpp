#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a,b;
        for(char c:s) {
            if(c!='#')a.push(c);
            else if(c =='#' && !a.empty())a.pop();
        }
        for(char c:t) {
            if(c!='#')b.push(c);
            else if(c =='#' && !b.empty())b.pop();
        }

        if(a.size() != b.size())return false;
        else {
            while(!a.empty()) {
                if(a.top() != b.top())return false;
                a.pop();
                b.pop();
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
