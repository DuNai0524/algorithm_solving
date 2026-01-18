#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

const int max_n = 2 * 1e5 + 10;

i64 a[max_n], b[max_n];
i64 dier[max_n], diel[max_n];

void solve() {
    int n, m, k;
    cin>>n>>m>>k;
    int cnt = n;

    vector<int> num;

    for(int i = 1; i <= n; i++)cin >> a[i];
    for(int i = 1; i <= m; i++)cin >> b[i];

    sort(b + 1, b + 1 + m);

    for(int i = 1; i <= n; i++) {
        i64 l = 1, r = m;

        while(l < r) {
            i64 mid = l + ((r - l) >> 1);
            if(b[mid] > a[i]) l = mid + 1;
            else r = mid - 1;
        }

        
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
