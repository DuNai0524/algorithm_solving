#include <bits/stdc++.h>
using namespace std;

// contest code

bool isArraySpecial(vector<int>& nums) {
    int n = nums.size();
    if(n == 1)return true;
    int flag = nums[0] % 2 == 0; // 偶数 true 奇数 false
    for(int i = 1; i < n ;i ++){
        if(flag){
            if(nums[i] % 2 == 0)return false;
            flag = false;
        }else{
            if(nums[i] % 2 != 0)return false;
            flag = true;
        }
    }
    return true;
}

// contest code end


int main(){

}