#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> tasks_map;
        for(auto i:tasks) {
            tasks_map[i]++;
        }
        int ans = 0;
        for(auto p:tasks_map) {
            if(p.second==1)return -1;
            else if(p.second==2)ans++;
            else if(p.second%3==0)ans+=p.second/3;
            else ans+=p.second/3+1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
