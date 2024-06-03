#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> a(n + 1,0);
    for(int i = 1;i <= n; i++)a[i] = i;
    reverse(a.begin()+l,a.begin()+r + 1);
    for(int i = 1; i <= n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
