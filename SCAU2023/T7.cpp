#include <iostream>
#include <vector>
using namespace std;
#define MAXN 100 + 10
int main() {
    // 计数 + 模拟
    vector<int> tm(MAXN,0);
    int n; cin>>n;
    for(int i = 0 ; i < n; i++){
        int t; cin>>t;
        tm[t] ++;
    }
    // 模拟，区间
    int index;
    int count = 0;
    int ans = INT_MAX;
    for(int i = 4;i <= 97; i++) {
        int cnt = 0;
        for(int j = 1;j <= 100; j++){
            if(tm[j] > 0){
                if ( j >= i - 3 && j <= i + 4){
                    continue;
                }else{
                    if( j < i - 3)cnt += ((i - 3) - j)*((i - 3) - j) * tm[j];
                    else cnt += (j - (i + 4)) * (j - (i + 4)) * tm[j];
                }
            }
        }
        ans = min(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}