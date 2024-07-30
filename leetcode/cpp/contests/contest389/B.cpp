#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long ans = 0;
        vector<int> idx;
        for(int i = 0;i < s.size();i++) {
            if(s[i]==c)idx.push_back(i);
        }
        ans += idx.size();
        for(int i = 0; i < idx.size();i++) {
            ans += idx.size() - 1 - i;
        }
        return ans;
    }
};

int main() {
    
}