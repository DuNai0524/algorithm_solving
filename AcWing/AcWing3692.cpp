#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2,ans;
    cin>>s1>>s2;
    int max_len = -0x3f3f3f3f,cur = 0;
    int l1 = s1.size(),l2 = s2.size();
    if(l1 < l2) {
        swap(l1,l2);
        swap(s1,s2);
    }
    for(int i = 0; i < l1; i++) {
        for(int j = 0; j < l2 && j + i < l1 ;j ++) {
            if(s1[i + j]==s2[j])cur++;
            else{
                if(max_len<cur){
                    ans = s1.substr(j - cur + 2,cur);
                    max_len = cur;
                    cur = 0;
                }
            }
        }
    }
    cout<<max_len<<endl;
    cout<<ans<<endl;
    return 0;
}