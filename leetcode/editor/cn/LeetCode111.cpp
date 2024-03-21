#include <bits/stdc++.h>
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = INT_MAX;
    void order(TreeNode*root,int depth) {
        if(root==nullptr) {
            return;
        }

        if(root->left == nullptr && root->right == nullptr) {
            ans = min(ans,depth);
        }else {
            order(root->left,depth + 1);
            order(root->right,depth + 1);
        }
    }

    int minDepth(TreeNode* root) {
        if(root==nullptr)return 0;
        order(root,1);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
