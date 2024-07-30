#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode * right;
    TreeNode * left;
};

class Solution {
public:
    long pre = INT_MIN;
    bool isValidBST(TreeNode* root) {
        if(root == nullptr) return true;
        if(!isValidBST(root->left)) return false;
        if(pre >= root -> val) return false;
        pre = root -> val;
        return isValidBST(root -> right);
    }
};

int main() {

}