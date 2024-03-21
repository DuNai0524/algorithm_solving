#include <iostream>
using namespace std;

int main() {
    int a0,a1,a2,b0,b1,b2;
    cin>>a0>>a1>>a2>>b0>>b1>>b2;
    int c0,c1,c2,c3,c4;
    c0 = a0 * b0;
    c1 = a0 * b1 +a1 * b0;
    c2 = a0 * b2 + a1 * b1 + a2 * b0;
    c3 = a1 * b2 + a2 * b1;
    c4 = a2 * b2;
    cout<<c0<<" "<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<endl;
    return 0;
}