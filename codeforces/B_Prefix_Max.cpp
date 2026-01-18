#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

void solve() {
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }

    int ma = a[0];
    for(int i = 0; i < n; i++) {
        if(ma < a[i]) ma = a[i];
    }

    cout<< ma * n << endl;

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
