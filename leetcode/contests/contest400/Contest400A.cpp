#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumChairs(string s) {
        int ans = 0, count = 0, n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == 'E')count++;
            else{
                ans = max(count,ans);
                count--;
            }
        }
        ans = max(count,ans);
        return ans;
    }
};

int main(){
    Solution s;
    s.minimumChairs("ELELEEL");
}