#include <iostream>
#include <vector>
using namespace std;
int ans = 0;

void dfs(vector<int>& a,int sum,int idx) {
    if(idx > a.size())return;
    sum += a[idx];
    ans = max(ans,sum);
    for(int i = idx + 1;i < a.size(); i++) {
        if(a[i] > a[idx]){
            dfs(a,sum,i);
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i = 0;i < n;i++){
        cin>>a[i];
    }
    for(int i = 0; i < n;i++){
        dfs(a,0,i);
    }
    cout<<ans<<endl;
    return 0;
}