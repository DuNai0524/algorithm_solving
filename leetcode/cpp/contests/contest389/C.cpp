#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubstringPresent(string s) {
        string ss;
        bool flag = false;
        ss.assign(s.rbegin(),s.rend());
        cout<<ss<<endl;
        for(int i = 0; i < s.size(); i++) {
                string str = "";
                str += ss[i];
                str += ss[i + 1];
                // cout<<str<<endl;
                if(s.find(str)!=-1) {
                    flag = true;
                }
        }
        return flag;
    }
};

int main() {
    Solution s;
    s.isSubstringPresent("hozpjlo");
}