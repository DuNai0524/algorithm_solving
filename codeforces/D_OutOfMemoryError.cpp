#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

const int max_n = 2 * 1e5 + 10;

i64 a[max_n], cura[max_n];

void solve() {
    int n, m;
    i64 h;
    cin>>n>>m>>h;

    for(int i = 1; i <= n; i++) {
        cin>>a[i];
        cura[i] = a[i];
    }

    vector<int> changed;
    
    for(int t = 0; t < m; t++){
        int b;
        i64 c;
        cin>>b>>c;

        cura[b] += c;

        changed.push_back(b);

        if(cura[b] > h) {
            for(auto idx: changed) {
                cura[idx] = a[idx];
            }
            changed.clear();
        }
    }

    for(int i = 1; i <= n; i++) {
        cout<<cura[i]<<" ";
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
