#include <bits/stdc++.h>
#include <cstring>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

const int max_n = 100 + 10;

int a[max_n], vis[max_n];

void init(){
    for(int i = 1; i < max_n; i++) vis[i] = 0;
}

void solve() {
    int n;
    init();
    cin>>n;
    for(int i = 1; i <= n; i++) cin>>a[i];

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(vis[i]) continue;
        int cnt = 0;
        vis[i] = 1;
        for(int j = i + 1; j <= n; j++) {
            if(a[i] > a[j] && !vis[j]){
                ans++;
                vis[j] = 1;
            }
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;
    while (T--) {
        solve();
    }
    return 0;
}
