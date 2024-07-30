#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearStars(string s) {
        map<char,stack<int>> mp;
        vector<bool> exist(s.size()+1,true);
        for(int i = 0; i < s.size();i++){
            if(s[i]=='*'){
                exist[i] = false;
                for(char ch = 'a';ch<='z';ch++){
                    if(mp[ch].size()){
                        int target = mp[ch].top();
                        mp[ch].pop();
                        exist[target] = false;
                        break;
                    }
                }
            }else{
                mp[s[i]].push(i);
            }
        }
        string res = "";
        for(int i = 0;i<s.size();i++){
            if(exist[i]){
                res.push_back(s[i]);
            }
        }
        return res;
    }
};

int main(){
    Solution s;
    s.clearStars("ad*d*");
}