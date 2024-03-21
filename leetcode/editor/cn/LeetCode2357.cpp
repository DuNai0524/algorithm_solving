#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++) {
            if(nums[i]>0) {
                int t = nums[i];
                for(int j = i;j<n;j++) {
                    nums[j] -= t;
                }
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    int a[5] = {1,5,0,3,5};
    vector<int> vec(a,a+5);
    Solution s;
    s.minimumOperations(vec);
}