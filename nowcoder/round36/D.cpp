#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000
char a[MAXN][MAXN];
int ans = INT_MAX;
int n,m;

int route[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void dfs(int i,int j,int count) {
    if(i>n-1 || j > m-1 || i<0 || j <0)return;
    if(i == n - 1 && j == m - 1) {
        ans = min(ans,count);
        return;
    }
    count++;
    for(int t=0;t<4;t++) {
        int nexti = i + route[t][0];
        int nextj = j + route[t][1];
        if(nexti<=n-1 && nextj <= m-1 && nexti>=0 && nextj >=0) {
            if(a[i][j] != a[nexti][nextj]) {
                dfs(nexti,nextj,count);
            }
        }
    }
}

int main() {
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)cin>>a[i][j];
    }
    vector<vector<bool>> flags(n,vector<bool>(m,false));

    dfs(0,0,0);
    cout<<ans<<endl;
    return 0;
}