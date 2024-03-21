#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int time;
    int value;
};

bool cmp(Node a,Node b) {
    return a.time < b.time;
}

int main() {
    vector<Node> nodes;
    int t,m;
    cin>>t>>m;
    vector<int> dp(t+1,0);
    while(m--) {
        Node n{};
        cin>>n.time>>n.value;
        nodes.push_back(n);
    }
    // 初始化
    sort(nodes.begin(), nodes.end(),cmp);
    // dp
    for(int i=0;i<nodes.size();i++) {
        for(int j=t;j>=nodes[i].time;j--) {
            dp[j] = max(dp[j],dp[j - nodes[i].time] + nodes[i].value);
        }
    }
    cout<<dp[t]<<endl;
    return 0;
}