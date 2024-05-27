//
// Created by OVRJU on 2024/5/25.
//
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> ans(n,0);
        map<int,int> num_idx;
        map<int,int> color;
        for(int i = 0; i < n; i++){
            if(num_idx.find(queries[i][0]) != num_idx.end()){
                // kv 操作找到了
                int t = num_idx[queries[i][0]];
                num_idx[queries[i][0]] = queries[i][1];
                color[queries[i][1]]++;
                color[t]--;
                if(color[t] == 0)color.erase(color.find(t));
            }else{
                num_idx[queries[i][0]] = queries[i][1];
                color[queries[i][1]]++;
            }
            ans[i] = color.size();
        }
        return ans;
    }
};