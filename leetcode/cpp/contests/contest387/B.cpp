#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // 二维前缀和
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int ans = 0;
        int m=grid.size() + 1,n=grid[0].size() + 1;
        vector<vector<int>> dp(m,vector<int>(n,0));

        for(int i=0;i<m - 1;i++) {
            for(int j=0;j<n - 1;j++) {
                dp[i+1][j+1] = grid[i][j];
            }
        }
        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {
                dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
            }
        }

        for(int i=1;i<m;i++) {
            for(int j=1;j<n;j++) {

                if(dp[i][j]<=k) ans++;
            }
        }
        return ans;
    }
};