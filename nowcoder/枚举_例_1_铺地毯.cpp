#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

const int max_n = 1e4 + 10;

struct node {
    int a, b, g, k;
};

node nds[max_n];

void solve() {
    int n, x, y;
    cin>>n;
    for(int i = 1; i <= n; i++) {
        cin>>nds[i].a>>nds[i].b>>nds[i].g>>nds[i].k;
    }
    cin>>x>>y;

    for(int i = n; i >= 1; i--) {
        // 点不在毯子里面，过
        if(x >= nds[i].a && y >= nds[i].b && x <= nds[i].a + nds[i].g && y <= nds[i].b + nds[i].k) {
            cout<<i<<"\n";
            return;
        }
    }

    cout<<-1<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
