#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int val;
    int w;
};

int main() {
    vector<Node> nodes;
    int n,m;
    cin>>n>>m;
    vector<int> dp(n+10,0);
    while(m--) {
        Node t;
        cin>>t.val>>t.w;
        nodes.push_back(t);
    }
    for(int i=0;i<nodes.size();i++) {
        for(int j=n;j>=nodes[i].val;j--) {
            dp[j] = max(dp[j],dp[j - nodes[i].val] + nodes[i].val * nodes[i].w);
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}