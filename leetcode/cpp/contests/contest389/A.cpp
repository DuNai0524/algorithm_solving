#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(string word, int k) {
        int ans = 0;
        unordered_map<char,int> char_map;
        for(auto c:word)char_map[c]++;
        vector<int> dmap;
        for(auto w:char_map)dmap.push_back(w.second);
        sort(dmap.begin(),dmap.end());
        if(dmap.size() > 2) {
            // 找中位数
            int  mid_n = (0 + dmap.size() - 1) / 2;
            int max_n,min_n;
            if(dmap.size()/2==0) {
                min_n = mid_n;
                max_n = mid_n + 1;
                if(dmap[max_n] - dmap[min_n] > k) {
                    ans += dmap[max_n] - (dmap[min_n] + k);
                    dmap[mid_n] = dmap[min_n] + k;
                }
            }else {
                min_n = mid_n - 1;
                max_n = min_n + 1 ;
                if(dmap[max_n] - dmap[min_n] > k) {
                    ans += dmap[max_n] - (dmap[min_n] + k);
                    dmap[mid_n] = dmap[min_n] + k;
                }
            }
            // 小于的全干掉，大于的减到max_n
            for(int i = 0;i<min_n;i++) {
                if(dmap[max_n] - dmap[i] > k)ans += dmap[i];
            }
            // 大于的
            for(int i = max_n + 1;i<dmap.size();i++) {
                if(dmap[i] - dmap[min_n] > k)ans += dmap[i] - (dmap[min_n] + k);
            }
        }else {
            int minn = dmap[0];
            int maxn = dmap[1];
            if(maxn - minn > k) {
                ans = min(minn,maxn - minn - k);
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    s.minimumDeletions("aaaabbbbbcccccc",2);
}