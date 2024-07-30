#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans = 0;
        for(int num:nums) {
            string strnum = to_string(num);
            char maxnum = '0';
            for(int i = 0;i<strnum.size();i++) {
                if(maxnum < strnum[i])maxnum = strnum[i];
            }
            for(int i = 0;i<strnum.size();i++)strnum[i] = maxnum;
            ans += stoi(strnum);
        }
        return ans;
    }
};