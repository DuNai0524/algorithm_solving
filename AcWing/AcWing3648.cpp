#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rmb[6] = {100,50,10,5,2,1};
    int n;
    while(cin>>n){
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];

        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<6;j++){
                count += a[i]/rmb[j];
                a[i] = a[i]%rmb[j];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}