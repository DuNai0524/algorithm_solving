#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    static bool cmp(pair<int,int>& a,pair<int,int>& b) {
        if(a.first == b.first) {
            return a.second > b.second;
        }
        return a.first > b.first;
    }

    int reductionOperations(vector<int>& nums) {
        vector<pair<int,int>> vec;
        for(int i = 0;i < nums.size(); i++) {
            pair<int,int> p;
            p.first = nums[i],p.second = i;
        }
        sort(vec.begin(), vec.end(),cmp);
    }
};
//leetcode submit region end(Prohibit modification and deletion)
