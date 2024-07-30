#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

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
    bool ans = true;

    void isSame(TreeNode *p,TreeNode *q){
        if(p==nullptr && q==nullptr) return;
        if((q==nullptr && p!=nullptr) || (p != nullptr && q== nullptr)){
            ans = false;
            return;
        } 

        if(q->val != p->val) {
            ans = false;
            return;
        }

        isSame(p->left,q->left);
        isSame(p->right,q->right);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {      
        isSame(p,q);
        return ans; 
    }
};