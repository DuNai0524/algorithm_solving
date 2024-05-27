#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int last = (m + n) * mean;
        for(int i:rolls)last -= i;
        if(last > 6 * n || last < n) return vector<int>({}); // 最大的时候也不行
        vector<int> ans(n,0);
        int min_t = last / n;
        int remain = last % n;        
        for(int i = 0; i < n; i++) {
            if(i < remain) ans[i] = min_t + 1;
            else ans[i] = min_t;
        }
        return ans;
    }
};

int main() {

}