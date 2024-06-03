#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a(m,0);
    for(int i = 0;i < m;i++)cin>>a[i];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int t;
            cin>>t;
            a[j]-=t;
        }
    }
    bool flag = true;
    for(int i = 0; i < m ;i++) {
        if(a[i]>0){
            flag = false;
            break;
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
