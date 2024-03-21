#include <bits/stdc++.h>
using namespace std;

string code="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string normal="VWXYZABCDEFGHIJKLMNOPQRSTU";

int main()
{
    string a;
    while(getline(cin,a)){
        if(a=="START"||a=="END")continue;
        else if(a=="ENDOFINPUT")break;

        string ans = "";

        for(int i=0;i<a.length();i++){
            if(code.find(a[i])==-1){
                ans+=a[i];
            }else{
                ans += normal[code.find(a[i])];
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}