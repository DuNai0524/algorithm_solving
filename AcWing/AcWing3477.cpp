#include <bits/stdc++.h>
using namespace std;

int t[1010]={0};

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
        t[a[i]]++;
    }
    for(int i=0;i<=1000;i++){
        if(t[i]>0)cout<<i<<' ';
    }
    cout<<endl;
    return 0;
}