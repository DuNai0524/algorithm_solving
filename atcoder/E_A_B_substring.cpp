#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

const int max_n = (5 * 1e5 + 5) * 2;

int t[max_n];
int n, lim;
string s;

int lowbit(int x) {return x & (-x);}

void add(int k, int v) {
    while(k <= lim) {
        t[k] += v;
        k += lowbit(k);
    }
}

int getsum(int k) {
    int ret = 0;
    while (k > 0) {
        ret += t[k];
        k -= lowbit(k);
    }
    return ret;
}

void solve() {
    cin>>n>>s;
    lim = 2 * n + 5;

    i64 ans = 0;
    int cur = 0, base = n + 1;

    add(0 + base, 1);
    for(auto c : s) {
        if(c == 'A') cur++;
        else if (c == 'B') cur--;

        int idx = cur + base;

        ans += getsum(idx - 1);
        add(idx, 1);
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
