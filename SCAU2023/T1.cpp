#include <iostream>
using namespace std;


int main(){
    double k;
    double m;
    cin>>k>>m;
    double ans = 0;
    k += m / 60.0 * 10;
    if(k<=3){
        ans += 12;
    }
    else{
        ans += 12 + (k - 3) * 2.6;
    }
    
    printf("%.2lf",ans);
    return 0;
}