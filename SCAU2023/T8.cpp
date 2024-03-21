#include <iostream>
#include <vector>
using namespace std;
vector<string> ans;

// 拆解成字符串分割(或者说记忆化搜索)
void backTrace(string& s,int startIndex) {
    if (startIndex >= s.size()) {
        ans.push_back(s);
        return;
    }
    for(int i = startIndex; i < s.size(); i++){
        // 判断区间长度是否合法
        if(i + 1 - startIndex <= 3) {
            s.insert(s.begin() + i + 1, '.');
            backTrace(s,i + 2);
            s.erase(s.begin() + 1 + i);
        }
    }
}

int main() {
    int n;
    while(cin>>n){
        if(n == 0)break;
        ans.clear();
        string s = "";
        for(int i = 1;i<=n;i++)s += (i + '0');
        backTrace(s,0);
        cout<<ans.size()<<endl;
    }
    return 0;
}