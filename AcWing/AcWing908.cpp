#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(vector<int> a,vector<int> b) {
    return a[0] < b[0];
}

int main() {
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(2,0));
    for(int i=0;i<n;i++) {
        cin>>vec[i][0]>>vec[i][1];
    }
    sort(vec.begin(), vec.end(),cmp);
    // 开始
    int idx = 0;
    int ans = 1;
    for(int i=1;i<n;i++) {
        if(vec[idx][1] < vec[i][0]) {
            idx = i;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}