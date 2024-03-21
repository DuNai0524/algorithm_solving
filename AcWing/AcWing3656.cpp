#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    while(cin>>n) {
        int t[10] = {0};
        for(int i=0;i<n.length();i++) {
            t[n[i] - '0']++;
        }
        int max_index = 0;
        for(int i=0;i<10;i++) {
            if(t[max_index]<t[i]) {
                max_index = i;
            }
        }
        cout<<max_index<<endl;
    }
    return 0;
}
