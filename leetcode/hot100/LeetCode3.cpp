#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    if(s.size()==0)return 0;
    unordered_set<char> lk;
    int maxStr = 0;
    int left = 0;
    for(int i=0;i<s.size();i++) {
        while(lk.find(s[i])!=lk.end()) {
            lk.erase(s[left]);
            left++;
        }
        maxStr = max(maxStr,i-left+1);
        lk.insert(s[i]);
    }
    return maxStr;
}