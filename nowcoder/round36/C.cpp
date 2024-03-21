#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int idx = 0, n = s.size();
    int ans = 0;
    while(idx < n) {
        if(s[idx]<='z'&& s[idx] >='a' && idx < n) {
            while (s[idx]<='z'&& s[idx] >='a' && idx < n)idx++;
        }else {
            if(idx + 1 != n) {
                if(s[idx + 1] >= 'A' && s[idx + 1] <= 'Z' && idx < n) {
                    idx++;
                    while (s[idx]<='Z'&& s[idx] >='A' && idx < n) {
                        if(s[idx + 1] >= 'a' && s[idx + 1] <= 'z') {
                            break;
                        }
                        idx++;
                        ans++;
                    }
                    while (s[idx]<='z'&& s[idx] >='a' && idx < n)idx++;
                }else {
                    idx++;
                    while (s[idx]<='z'&& s[idx] >='a' && idx < n)idx++;
                }
            }else idx++;
        }
    }
    cout<<ans<<endl;
    return 0;
}