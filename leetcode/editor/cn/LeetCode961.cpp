#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        unordered_map<int,int> map;
        for(int i:nums)map[i]++;
        for(auto p:map) {
            if(p.second == n)return p.first;
        }
        return 1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}