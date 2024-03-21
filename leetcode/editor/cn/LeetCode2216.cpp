#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minDeletion(vector<int>& nums) {
        if (nums.size() == 0)return 0;
        int n = nums.size();
        stack<int> stk;
        for(int i = 0;i < n;i ++) {
            if(stk.empty())stk.push(nums[i]);
            else {
                int idx = stk.size() - 1;
                if(idx % 2 == 0) {
                    if(stk.top()!=nums[i])stk.push(nums[i]);
                }else stk.push(nums[i]);
            }
        }
        if(stk.size()%2!=0)stk.pop();
        return n - stk.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    int a[6] = {1,1,2,2,3,3};
    vector<int> v(a,a+6);
    Solution s;
    s.minDeletion(v);
}