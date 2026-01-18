#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

const int max_n = 3 * 1e5 + 10;
i64 a[max_n];

void solve() {
    i64 n, k, x;
    cin>>n>>k>>x;

    for(int i = 1; i <= n; i++) {
        cin>>a[i];
    }

    sort(a + 1, a + 1 + n);

    i64 cnt = 0;
    for(int i = k; i >= 1; i--) {
        cnt += a[i];
        if(cnt >= x){
            cout << (n - i + 1);
            return;
        }
    }

    cout<<-1;

    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
