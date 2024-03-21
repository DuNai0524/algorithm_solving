#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool winnerOfGame(string colors) {
        if (colors.size() < 3)return false;
        // 算能删除的次数，A > B
        int countA = 0, countB = 0, allA = 0, allB = 0;
        int idx = 0, n = colors.size();
        while(idx < n) {
            while(colors[idx]=='A' && idx < n) {
                allA++;
                idx++;
            }
            if(allA>=3)countA+=(allA - 2);
            while(colors[idx]=='B' && idx < n) {
                allB++;
                idx++;
            }
            if(allB>=3)countB+=(allB - 2);
            allA = 0, allB = 0;
        }
        if(countA == 0)return false;
        if(countA>countB)return true;
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
