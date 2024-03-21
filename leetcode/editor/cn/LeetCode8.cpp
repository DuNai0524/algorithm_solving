#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int myAtoi(string s) {
        int res = 0, bndry = INT_MAX / 10;
        int i = 0, sign = 1, length = s.size();
        if(length == 0) return 0;
        while(s[i] == ' ')
            if(++i == length) return 0;
        if(s[i] == '-') sign = -1;
        if(s[i] == '-' || s[i] == '+') i++;
        for(int j = i; j < length; j++) {
            if(s[j] < '0' || s[j] > '9') break;
            if(res > bndry || res == bndry && s[j] > '7')
                return sign == 1 ? INT_MAX : INT_MIN;
            res = res * 10 + (s[j] - '0');
        }
        return sign * res;
    }
};

//leetcode submit region end(Prohibit modification and deletion)
