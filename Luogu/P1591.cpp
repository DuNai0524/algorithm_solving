#include <bits/stdc++.h>
using namespace std;

#define MAXN 2000000

int a[MAXN+10];

int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    while(m--) {
        int t;
        cin>>t;
        cout<<a[t-1]<<" ";
    }
    return 0;
}