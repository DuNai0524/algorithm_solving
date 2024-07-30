#include <bits/stdc++.h>
using namespace std;

// contest code

vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size();
    int m  = queries.size();
    vector<bool> ans(m,false);
    if(n == 1){
        for(int i = 0; i < m; i++)ans[i]=true;
        return ans;
    }
    // 前缀和处理
    vector<int> prefix(n,0);
    for(int i = 1;i < n; i ++){
        if(nums[i] % 2 == nums[i - 1] % 2) prefix[i] = prefix[i - 1] + 1;
        else prefix[i] = prefix[i - 1];
    }

    // 查询每次询问
    for(int i = 0; i < m; i++){
        if(prefix[queries[i][1]] - prefix[queries[i][0]] == 0){
            ans[i] = true;
        }else ans[i] = false;
    }
    return ans;
}

// contest code end


int main(){
    vector<int> arr1({3,4,1,2,6});
    vector<vector<int>> arr2;
    arr2.push_back(vector<int>({0,4}));
    isArraySpecial(arr1,arr2);
}