#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int getSum(int n) {
        int sum = 0;
        while(n>0) {
            sum += (n%10) * (n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> numSet;
        if(n==1)return true;
        while(1) {
            int sum = getSum(n);
            if(sum == 1)return true;
            else if(numSet.find(sum)!=numSet.end())return false;
            else {
                numSet.insert(sum);
                n = sum;
            }
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)
