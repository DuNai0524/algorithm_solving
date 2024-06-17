#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        int score = nums[0] + nums[1];
        for(int i = 2; i < n; i+=2){
            if(nums[i] + nums[i+1] == score)ans++;
            else break;
        }
        return ans;
    }
};

int main() {

}