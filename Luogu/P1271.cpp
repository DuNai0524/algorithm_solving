#include <bits/stdc++.h>
using namespace std;

#define MAXN 999
int a[MAXN+10];
int main() {
    int m,n;
    cin>>m>>n;
    while(n--) {
        int t;
        cin>>t;
        a[t]++;
    }

    for(int i=0;i<=MAXN;i++) {
        if(a[i]!=0) {
            while(a[i]--)cout<<i<<' ';
        }
    }

    return 0;
}