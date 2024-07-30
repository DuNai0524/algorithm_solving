//
// Created by OVRJU on 2024/5/25.
//
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)return 0;
        unordered_map<int,int> map;
        for(int i = 0; i < n; i ++) map[nums[i]]++;

        vector<int> nums_vector;
        for(auto p:map){
            if(p.second == 2)nums_vector.push_back(p.first);
        }

        int ans = 0;
        int l = nums_vector.size();
        if(l == 0)ans = 0;
        else if(l == 1)ans = nums_vector[0];
        else {
            ans = nums_vector[0];
            for(int i = 1; i < l; i++){
                ans ^= nums_vector[i];
            }
        }
        return ans;
    }
};

int main(){
    vector<int> t({1,2,2,1});
    Solution s;
    s.duplicateNumbersXOR(t);
}
