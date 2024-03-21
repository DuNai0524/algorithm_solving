#include <bits/stdc++.h>
using namespace std;

int main()
{
    double base_odd = 0.5;
    double base_even = 2.0;

    int n;
    while(cin>>n){
        double t = 0;
        if(n%2==1){
            t += base_odd + n-3;
        }else{
            t += base_even + n-4;
        }
        printf("%.1lf\n",t);
    }
    return 0;
}