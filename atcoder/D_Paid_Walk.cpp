#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

const int max_n = 2 * 1e5 + 10;

struct edge{
    int v, c;
};

// 最大出度是4，最多 L 条边

vector<edge> edges[max_n];
set<int> ans;

int n, m, l;
i64 s, t;

void dfs(int u, int depth, i64 cur) {
    if(cur > t) return;
    if(depth >= l) {
        if(cur >= s && cur <= t) ans.insert(u);
        return;
    }

    for(auto e : edges[u]) {
        dfs(e.v, depth + 1, cur + e.c);
    }
}

void solve() {
    cin >> n >> m >> l >> s >> t;

    for(int i = 1; i <= m; i++) {
        int u, v, c;
        cin>>u>>v>>c;
        edges[u].push_back({v, c});
    }

    // 从顶点 1 开始
    dfs(1, 0, 0);

    for(auto i : ans) {
        cout<<i<<" ";
    }

    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
