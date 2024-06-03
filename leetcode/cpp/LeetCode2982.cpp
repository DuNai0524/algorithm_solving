#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLength(string s) {
        vector<vector<int>> groups(26);
        int count = 0, n = s.size(), ans = 0;
        for(int i = 0; i < n; i++) {
            count++;
            if( i + 1 == n || s[i] != s[i + 1]){
                groups[s[i] - 'a'].push_back(count);
                count = 0;
            }
        }

        for(vector<int> v:groups){
            sort(v.begin(),v.end(),greater<int>());
            while(v.size() < 3)v.push_back(0); 
            ans = max(ans,max(v[0] - 2,max(min(v[0] - 1,v[1]),v[2])));
        }
        return ans == 0?-1:ans;
    }
};

int main() {

}