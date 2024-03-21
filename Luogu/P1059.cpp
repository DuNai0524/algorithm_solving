#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int t;
        cin>>t;
        s.insert(t);
    }

    cout<<s.size()<<endl;
    for(int x: s) {
        cout<<x<<" ";
    }
    return 0;
}