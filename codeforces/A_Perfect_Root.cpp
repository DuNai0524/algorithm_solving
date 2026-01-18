#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

void solve() {
    int n;
    cin>>n;

    for (int i = 1; i <= n; ++i) {
        cout << i << (i == n ? "" : " ");
    }

    cout<<endl;
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
