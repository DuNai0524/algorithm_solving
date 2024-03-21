#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        cin>>t;
        vector<int> stones;
        int sum = 0;
        for(int i=0;i<t;i++) {
            int in;
            cin>>in;
            sum += in;
            stones.push_back(in);
        }
        // 直接算 Alice 的
        int countA = 0;
        for(int i=stones.size()-1;i>=0;i-=2) {
            countA += stones[i];
        }
        int countB = sum - countA;
        if(countA>countB)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}