#include <bits/stdc++.h>
using namespace std;

bool isBeautifulNumber(int x)
{
    int a = x/100;
    int b = x/10%10;
    int c = x%10;
    return x==a*a*a+b*b*b+c*c*c;
}

int main()
{
    int m,n;
    while(cin>>m>>n){
        bool flag = false;
        if(m==0||n==0)break;
        for(int i=m;i<=n;i++){
            if(isBeautifulNumber(i)){
                flag = true;
                cout<<i<<" ";
            }
        }
        if(flag){
            cout<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}