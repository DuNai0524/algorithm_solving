#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int,string>& a,const pair<int,string>& b) {
    if(a.second.length()>b.second.length())return 1;
    if(a.second.length() == b.second.length() && a.second > b.second)return 1;
    return 0;
}

int main() {
    vector<pair<int,string>> vec;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        pair<int,string> p;
        p.first = i;
        cin>>p.second;
        vec.push_back(p);
    }

    sort(vec.begin(),vec.end(),compare);
    cout<<vec[0].first<<endl;
    cout<<vec[0].second<<endl;
    return 0;
}