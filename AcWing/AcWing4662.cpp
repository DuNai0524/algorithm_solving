#include <bits/stdc++.h>
using namespace std;
const int mod = 1000000000 + 7;
int main()
{
    int n;
    cin>>n;
    long long ans = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0)ans+=(i*i%mod);
    }
    cout<<ans<<endl;
    return 0;
}