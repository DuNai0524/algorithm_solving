#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int ans = 0, n = nums.size();
        for(int i = 0; i < n; i++) {
            while(nums[i] >= 10){
                nums[i] /= 10;
            }

            for(int j = i + 1; j < n; j++) {
                if( gcd(nums[i],nums[j] % 10) == 1) ans++;
            }
        }
        return ans;
    }
};

int main() {

}