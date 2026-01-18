#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

const int max_n = 3000 + 10;

int a[max_n];

void solve() {
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++) cin>>a[i];

    sort(a + 1, a + 1 + n);

    int max_l = 1, cur_l = 1;

    for(int i = 2; i <= n; i++) {
        if(a[i] == a[i - 1] + 1) cur_l++;
        else if(a[i] == a[i - 1]) continue;
        else {
            max_l = max(max_l, cur_l);
            cur_l = 1;
        }
    }

    max_l = max(max_l, cur_l);
    cout<< max_l <<endl;
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
