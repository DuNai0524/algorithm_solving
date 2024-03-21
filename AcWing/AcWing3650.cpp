#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int m,n;
    while(cin>>m>>n){
        ll count_odd = 0;
        ll count_or = 0;

        if(m>n){
            int t = m;
            m = n;
            n = t;
        }

        for(int i=m;i<=n;i++){
            if(i%2==0){
                count_odd+=i*i;
            }else{
                count_or+=i*i*i;
            }
        }

        cout<<count_odd<<" "<<count_or<<endl;
    }
    return 0;
}