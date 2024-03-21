#include <bits/stdc++.h>
using namespace std;
#define MAXN 100 + 10

int a[MAXN][MAXN];
int b[MAXN][MAXN];

int main() {
    int n,m;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        for(int j = 0;j < m;j++){
            cin>>a[i][j];
        }
    }
    // 最外侧不变，中间的上下左右取平均值
    for(int i = 0;i < n;i++){
        for(int j = 0; j < m;j++){
            if(i == 0 || i == n - 1 || j == 0 || j == m - 1){
                b[i][j] = a[i][j];
            }else{
                b[i][j] = (a[i][j] + a[i+1][j] + a[i-1][j] + a[i][j+1] + a[i][j-1])/5;
            }
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}