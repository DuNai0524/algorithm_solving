#include <iostream>
using namespace std;

int main() {
    long long ans = 0;
    int a,n;
    cin>>n>>a;
    int t = a;
    for(int i = 1;i <= n;i++){
        ans += t;
        t *= 10;
        t += a;
    }
    cout<<ans<<endl;
    return 0;
}