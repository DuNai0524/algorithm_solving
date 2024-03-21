#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void backTracking(vector<int>& nums,int startIndex) {
        if(path.size() >= 2) {
            ans.push_back(path);
        }
        if(startIndex == nums.size())return;
        // 去重逻辑；对当前层使用哈希去重
        unordered_set<int> s;
        for(int i = startIndex; i < nums.size() ; i++) {
            if(s.count(nums[i]) || (!path.empty() && nums[i] < path[path.size() - 1]))continue;
            s.insert(nums[i]);
            path.push_back(nums[i]);
            backTracking(nums, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        backTracking(nums,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}