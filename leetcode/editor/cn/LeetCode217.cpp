#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> num_map;
        for(int i:nums) {
            num_map[i]++;
            if(num_map[i] >= 2)return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}