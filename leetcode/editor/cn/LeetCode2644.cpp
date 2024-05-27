#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int n = nums.size(), m = divisors.size();
        sort(divisors.begin(), divisors.end());
        vector<int> temp(m,0);
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(nums[j]%divisors[i] == 0)temp[i]++;
            }
            if(temp[ans]<temp[i])ans=i;
        }
        return divisors[ans];
    }
};
//leetcode submit region end(Prohibit modification and deletion)
