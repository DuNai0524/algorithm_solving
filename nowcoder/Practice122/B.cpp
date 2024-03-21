#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

#define MAXN 100000

int a[MAXN +10];
int b[MAXN + 10];

int main() {
    int T;
    cin>>T;
    while(T--) {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        unordered_map<int,int> map;
        bool flag = true;
        for(int i=0;i<n;i++) {
            if(map.find(a[i]) == map.end()) {
                map[a[i]] = b[i];
            }else {
                if(map[a[i]]!=b[i]) {
                    flag = false;
                    break;
                }
            }
        }
        if(flag)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}