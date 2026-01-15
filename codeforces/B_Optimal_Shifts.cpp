#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0, last = -1;
    s += s;
    for(int i = 0; i < n * 2; i++) {
        if(s[i] == '1') {
            last = i;
        }else if(s[i] == '0' && last != -1){
            ans = max(ans, i - last);
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
