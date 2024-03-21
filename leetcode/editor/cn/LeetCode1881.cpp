#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    const char *s;
    char y;
    int cmp(int pos1, int pos2){    //比较把y插到pos1 和插到 pos2，哪个结果比较大
        if(y!=s[pos1]){
            return y>s[pos1]?1:-1;
        }
        return memcmp(s+pos1, s+pos1+1, pos2-pos1-1);
    }
public:
    string maxValue(const string&n, int x) {
        s=n.data();
        y='0'+x;
        if(n[0]=='-'){
            int ansidx=1;
            for(int i=1;i<n.size();i++){
                if(cmp(ansidx,i+1)>0)ansidx=i+1;
            }
            return n.substr(0,ansidx)+y+n.substr(ansidx);
        }
        else{
            int ansidx=0;
            for(int i=0;i<n.size();i++){
                if(cmp(ansidx,i+1)<0)ansidx=i+1;
            }
            return n.substr(0,ansidx)+y+n.substr(ansidx);
        }
    }
};
auto initial=[](){
    std::ios::sync_with_stdio(0);
    cin.tie(0); //cout.tie(0);
    return 0;
}();

//leetcode submit region end(Prohibit modification and deletion)
