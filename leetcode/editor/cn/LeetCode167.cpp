#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0,right = numbers.size() - 1;

        while(left < right) {
            if(numbers[left] + numbers[right] > target)right--;
            if(numbers[left] + numbers[right] < target)left++;
            if(numbers[left] + numbers[right] == target)break;
        }
        vector<int> ans(2,.0);
        ans[0] = left + 1,ans[1] = right + 1;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}