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
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> candySet;
        for(auto i:candyType)candySet.insert(i);
        int n = candyType.size() / 2;
        if(n>=candySet.size())return candySet.size();
        return n;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
