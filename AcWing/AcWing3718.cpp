#include <bits/stdc++.h>
using namespace std;

int ans = -0x3f3f3f3f;
string s;


// 找分割点

void backTrace(int n,int k,int startIndex, int sum) {
    if(startIndex >= n || k == 0) {
        if(k==0){
            int num = stoi(s.substr(startIndex));
            sum*=num; 
            ans = max(sum,ans);
        }
        return;
    }

    for(int i = startIndex + 1; i < n; i++) {
        int num = stoi(s.substr(startIndex, i - startIndex));
        cout<<num<<":k:"<<k<<endl;
        sum *= num;
        k--;
        backTrace(n,k,i,sum);
        k++;
        sum /= num;
    }
}


int main() {
    int n,k;
    cin>>n>>k>>s;
    for(int i = 0; i < n; i++) backTrace(n,k,0,1);
    cout<<ans<<endl;
    return 0;
}


