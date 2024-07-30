#include <bits/stdc++.h>
using namespace std;


int maxScore(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    vector<vector<int>> dp(n,vector<int>(m,INT_MIN));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
        
            if(i == 0 && j == 0 )dp[i][j] = 0;
            else if(i == 0){
                dp[i][j] = max(grid[i][j] - grid[i][j - 1],max(dp[i][j - 1] + grid[i][j] - grid[i][j-1],dp[i][j - 1] + grid[i][j]-grid[i][0]));
            }else if(j == 0){
                dp[i][j] = max(grid[i][j] - grid[i - 1][j],max(dp[i - 1][j] + grid[i][j] - grid[i - 1][j],dp[i - 1][j] + grid[i][j]-grid[0][j]));
            }else {
                int a = max(grid[i][j] - grid[i][j - 1],max(dp[i][j - 1] + grid[i][j] - grid[i][j-1],dp[i][j - 1] + grid[i][j]-grid[i][0]));
                int t = max(grid[i][j] - grid[i - 1][j],max(dp[i - 1][j] + grid[i][j] - grid[i - 1][j],dp[i - 1][j] + grid[i][j]-grid[0][j]));
                dp[i][j] = max(a,t);
            }
        }
    }

    return dp[n - 1][m - 1];  
}