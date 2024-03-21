#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static bool cmp(vector<int>& a,vector<int> &b){
    if(a[1] == b[1])return a[0] < b[0];
    return a[1] < b[1];
}

int main() {
    int n;
    vector<vector<int>> contests;
    cin>>n;
    for(int i = 0;i < n;i ++) {
        vector<int> v(2,0);
        cin>>v[0]>>v[1];
        contests.push_back(v);
    }
    sort(contests.begin(),contests.end(),cmp);
    int ans = INT_MIN;
    // 直接暴力，懒得贪心了，怕出错
    for(int i = 0;i < n;i++){
        int right = contests[i][1];
        int count = 1;
        for(int j = i + 1;j <n ;j++) {
            if(right <= contests[j][0]){
                right = contests[j][1];
                count++;
            }
        }
        ans = max(ans,count);
    }
    cout<<ans<<endl;
    return 0;
}