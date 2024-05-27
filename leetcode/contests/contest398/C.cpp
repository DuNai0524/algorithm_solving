#include <bits/stdc++.h>
using namespace std;

// contest code

long long sumDigitDifferences(vector<int>& nums) {
    long long ans = 0;
    vector<string> vec;
    for(int i:nums)vec.push_back(to_string(i));
    int n = nums.size();
    int l = vec[0].size();
    for(int i = 0; i < l ;i ++){
        unordered_map<char,int> s;
        for(int j = 0 ; j < n ; j++){
            s[vec[j][i]]++;
        }
        if(s.size() > 1){
            long long temp = 0;
            vector<pair<char,int>> t_vec(s.begin(), s.end());
            int tn = t_vec.size();
            for(int ii = 0; ii < tn; ii++){
                for(int jj = ii + 1; jj < tn ; jj ++){
                    temp += t_vec[ii].second * t_vec[jj].second;
                }
            }
            ans += temp;
        }
    }
    return ans;
}

// contest code end


int main(){
    vector<int> arr({13,23,12});
    sumDigitDifferences(arr);
}