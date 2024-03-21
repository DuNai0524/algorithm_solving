#include <bits/stdc++.h>
using namespace std;
string t = "1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";

int main()
{
    string s;
    while(getline(cin,s)){
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')cout<<' ';
            else{
                for(int j=0;j<t.length();j++){
                    if(s[i]==t[j]){
                        cout<<t[j-1];
                        break;
                    }
                }
            }
        }
        puts("");
    }

}