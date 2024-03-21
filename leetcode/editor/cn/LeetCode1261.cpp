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
class FindElements {
public:
    TreeNode* root;
    unordered_set<int> valSet;
    FindElements(TreeNode* root) {
        this->root = root;
        root->val = 0;
        valSet.insert(0);
        init(root);
    }

    void init(TreeNode* &root) {
        if(root==nullptr)return;
        if(root->left != nullptr) {
            root->left->val = root -> val * 2 + 1;
            valSet.insert(root->left->val);
            init(root->left);
        }
        if(root->right != nullptr) {
            root->right->val = root -> val * 2 + 2;
            valSet.insert(root->right->val);
            init(root->right);
        }
    }

    bool find(int target) {
        if(valSet.find(target)!=valSet.end()) {
            return true;
        }
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
//leetcode submit region end(Prohibit modification and deletion)
