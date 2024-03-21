#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    vector<int> ans{};
public:
    void divide(int n) {
        for (int i = int(sqrt(n)); i != 0; --i)
            if (n % i == 0)
                if (abs(n / i - i) < abs(ans[0] - ans[1])) {
                    ans[0] = n / i;
                    ans[1] = i;
                }
    }
    vector<int> closestDivisors(int num) {
        ans.push_back(0);
        ans.push_back(1e9);
        divide(num + 1);
        divide(num + 2);
        return ans;
    }
};


//leetcode submit region end(Prohibit modification and deletion)
