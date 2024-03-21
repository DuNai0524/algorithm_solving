#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a>b)cout<<"kou";
    else if(a<b)cout<<"yukari";
    else cout<<"draw";
    return 0;
}