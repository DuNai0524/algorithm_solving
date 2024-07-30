#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string compressedString(string word){
        string ans = "";
        int n = word.size();
        char cur = word[0];
        int count = 0;
        int i = 0;
        while(i < n){
            while(cur == word[i]){
                count++;
                i++;
            }

                if(count <= 9){
                    ans.push_back(count + '0');
                    ans.push_back(cur);
                    cur = word[i];
                    count = 0;
                }else{
                    int t = count / 9;
                    int last = count % 9;
                    for(int j = 0; j < t; j++){
                        ans.push_back( '9');
                        ans.push_back(cur);
                    }
                    if(last != 0){
                        ans.push_back(last + '0');
                        ans.push_back(cur);
                    }
                    cur = word[i];
                    count = 0;
                }
        }

        return ans;
    }
};

int main() {
    Solution s;
    s.compressedString("aaaaaaaaaaaaaabb");
}