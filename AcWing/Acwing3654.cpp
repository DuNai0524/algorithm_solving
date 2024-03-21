#include <bits/stdc++.h>
using namespace std;

int main()
{
    string standard = "EASY ";
    string a;
    while(cin>>a){
        int idx = 0;
        int l = a.length();
        for(int i=0;i<l;i++){
            if(standard[idx]==a[i])idx++;
        }
        idx==4?cout<<"easy"<<endl:cout<<"difficult"<<endl;
    }
    return 0;
}