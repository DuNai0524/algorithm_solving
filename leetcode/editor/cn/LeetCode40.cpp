#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void backTrace(vector<int>& candidates,int target,int sumTarget,int startIndex) {
        if(sumTarget > target)return;
        if(sumTarget == target) {
            ans.push_back(path);
            return;
        }
        for(int i = startIndex;i < candidates.size(); i++) {
            if(i > startIndex && candidates[i] == candidates[i - 1])continue;
            path.push_back(candidates[i]);
            sumTarget += candidates[i];
            backTrace(candidates,target,sumTarget,i + 1);
            path.pop_back();
            sumTarget -= candidates[i];
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backTrace(candidates,target,0,0);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
