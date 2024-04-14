#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> nums_map;
        int n = nums.size();
        for(int i:nums)nums_map[i]++;
        vector<int> ans;
        for(auto p:nums_map) {
            if(p.second > n/3)ans.push_back(p.first);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}