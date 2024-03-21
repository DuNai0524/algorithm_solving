#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m;
    cin>>n>>m;
    long long a=0,b=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(i==j) a+=(n-i)*(m-j);//如果i==j，说明是正方形
            else b+=(n-i)*(m-j);//如果不等说明是矩形
        }
    }
    cout<<a<<' '<<b<<endl;
    return 0;
}