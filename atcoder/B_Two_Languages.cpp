#include <bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

void solve() {
  int n, m;
  string tgo, ago;
  cin >> n >> m;
  cin >> tgo >> ago;

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;

    int cnt_tgo = 0, cnt_ago = 0;
    for (auto c : s) {
      if (tgo.find(c) != -1)
        cnt_tgo++;
      if (ago.find(c) != -1)
        cnt_ago++;
    }

    if ((cnt_ago == 0 && cnt_tgo == 0) || cnt_ago == cnt_tgo) {
      cout << "Unknown";
    } else if (cnt_ago < cnt_tgo) {
      cout << "Takahashi";
    } else if (cnt_tgo < cnt_ago) {
      cout << "Aoki";
    }

    cout << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
