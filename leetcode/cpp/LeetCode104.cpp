#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution {
public:
    int ans = 0;

    void dfs(TreeNode *root,int depth) {
        if(root == NULL) {
            ans = max(depth,ans);
            return;
        }

        dfs(root->left,depth+1);
        dfs(root->right,depth+1);
    }

    int maxDepth(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};

int main() {

}