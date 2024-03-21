#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> shortestSubstrings(vector<string>& arr) {
        // 暴力能过
        int n = arr.size();
        vector<string> ans(n,"");

        for(int i=0;i<n;i++) {
            string tempStr;
            for(int j=0;j<arr[i].size();j++) {
                tempStr.push_back(arr[i].at(j));
                for(int k=j;k<arr[i].size();k++) {
                    if(k!=j)tempStr.push_back(arr[i].at(k));
                    // 回溯暴力搜索
                    bool flag = true;
                    for(int l=0;l<n;l++) {
                        if(l!=i && arr[l].find(tempStr)!=-1) {
                            flag = false;
                            break;
                        }
                    }
                    if(flag) {
                        if(ans[i]=="")ans[i] = tempStr;
                        else {
                            if(ans[i].size() > tempStr.size()) {
                                ans[i] = tempStr;
                            }else if (tempStr.compare(ans[i])<0 && ans[i].size() == tempStr.size()) {
                                ans[i] = tempStr;
                            }
                        }
                    }
                }
                tempStr.clear();
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    string v[] = {"gfnt","xn","mdz","yfmr","fi","wwncn","hkdy"};

    vector<string> vec(v,v+7);
    s.shortestSubstrings(vec);
}