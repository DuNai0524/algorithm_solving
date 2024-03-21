#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size(),le=0,ri=n-1,temp;//le标记左边的奇数，ri标记右边的偶数
        while(le<ri){
            while(le<n&&nums[le]%2==0)le++;
            while(ri>-1&&nums[ri]%2==1)ri--;
            if(le<ri){
                temp=nums[le];
                nums[le]=nums[ri];
                nums[ri]=temp;
                le++;
                ri--;
            }
            else break;
        }
        return nums;
    }
};

//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}