#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count_1 = 0;
        int n = s.size();
        for(int i = 0;i< n;i++) {
            if(s[i]=='1')count_1++;
        }
        if(count_1>0) {
            s[n - 1] = '1';
            count_1--;
        }

        for(int i=0;i<n - 1;i++) {
            if(count_1>0) {
                s[i]='1';
                count_1--;
            }else s[i]='0';
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
