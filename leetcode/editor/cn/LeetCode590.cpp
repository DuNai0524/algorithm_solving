#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
//leetcode submit region begin(Prohibit modification and deletion)

class Solution {
public:
    void order(const Node* root,vector<int>& res) {
        if(root==nullptr)return;
        for(auto c:root->children) {
            order(c,res);
        }
        res.emplace_back(root->val);
    }

    vector<int> postorder(Node* root) {
        vector<int> res;
        order(root,res);
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
