#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfChild(int n, int k) {
        bool reverse_flag = false;
        int cur = 0;
        while (k-- ){
            if(reverse_flag && cur >= 0){
                cur--;
                if(cur == 0) reverse_flag = false;
            }else{
                cur++;
                if(cur == n - 1)reverse_flag = true;
            }
        }
        return cur;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
