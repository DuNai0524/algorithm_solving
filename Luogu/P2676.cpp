#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
#define MAXN 20000

ll a[MAXN+10];

bool cmp(int a,int b) {
    return a>b;
}

int main() {
    ll n,h;
    cin>>n>>h;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n+1,cmp);
    ll t = 0;
    for(int i=0;i<n;i++) {
        t += a[i];
        if(t>h) {
            cout<<i+1;
            exit(0);
        }
    }
    return 0;
}