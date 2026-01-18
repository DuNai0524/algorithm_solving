#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

void solve() {
    int p, q, x, y;
    cin>>p>>q>>x>>y;

    if(x < p + 100 && y < q + 100 && x >= p && y >= q) cout<<"Yes\n";
    else cout<<"No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
