//
// Created by OVRJU on 2024/5/25.
//

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> idx;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == x) idx.push_back(i);
        }

        int n = idx.size();
        vector<int> ans(queries.size(),-1);
        for(int i = 0; i < queries.size(); i++){
            if(queries[i]  <= n)ans[i] = idx[queries[i] - 1];
        }
        return ans;
    }
};