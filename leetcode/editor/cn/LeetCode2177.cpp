#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;
        if(num % 3 !=0)return ans;

        long long a = num / 3 - 1;
        long long b = num / 3;
        long long c = num / 3 + 1;
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);

        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
