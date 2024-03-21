#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minimizeStringValue(string s) {
        vector<int> cnum(26,0);// 计数
        string t = "";
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(s[i]!='?') {
                cnum[s[i] - 'a']++;
            }else {
                int min_num = 0;
                int min_idx = 0;
                // 好像暴力能解
                for(int j = 0;j < 26; j++) {
                    if(cnum[j]<min_num) {
                        min_num = cnum[j];
                    }
                }
                for(int j = 0;j < 26; j++) {
                    if(cnum[j]==min_num) {
                        min_idx = j;
                        break;
                    }
                }
                cnum[min_idx] ++;
                t += ('a' + min_idx);
            }
        }
        sort(t.begin(), t.end());
        for(int i = 0,idx = 0;idx < s.size();idx++) {
            if(s[idx] == '?') {
                s[idx] = t[i++];
            }
        }
        return s;
    }
};

int main() {
    Solution s;
    s.minimizeStringValue("a?a?");
}