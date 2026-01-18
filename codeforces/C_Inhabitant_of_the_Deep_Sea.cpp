#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

const int max_n = 2 * 1e5 + 10;

i64 a[max_n];

void solve() {
    int n;
    i64 k;
    cin>>n>>k;

    for(int i = 1; i <= n; i++) cin >> a[i];

    int ans = 0;

    int l = 1, r = n;
    while (k > 0 && l < r) {
        i64 cur = a[l] + a[r];

        if(cur <= k) {
            cout<<k<<":"<<cur<<endl;
            if(a[l] < a[r]){
                k -= a[l] * 2;
                a[l] = 0;
                l++;

                a[r] -= a[l];
            }else if(a[l] > a[r]) {
                k -= a[r] * 2;
                a[r] = 0;
                r--;

                a[l] -= a[r];               
            }
            ans++;
        }
    }

    if(l == r && k >= a[l]) ans ++;

    cout << ans << endl;
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
