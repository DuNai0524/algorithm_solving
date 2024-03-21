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
class Solution
{
public:
    int minPartitions(string n)
    {
        ////////// 本质：找最大的数字
        return *max_element(n.begin(), n.end()) - '0';
    }
};

//leetcode submit region end(Prohibit modification and deletion)
