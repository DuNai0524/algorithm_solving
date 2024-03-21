#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    static bool cmp(pair<int,int>& a,pair<int,int>& b) {
        return a.second > b.second;
    }

    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> num_map;
        for(int i:arr)num_map[i]++;
        // 排序
        vector<pair<int,int>> pairs(num_map.begin(), num_map.end());
        sort(pairs.begin(), pairs.end(),cmp);

        int cnt = 0,idx = 0,ans = 0;
        while (cnt < n / 2) {
            cnt += pairs[idx].second;
            idx++;
            ans++;
        }

        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main() {
    vector<int> vec({3,3,3,3,5,5,2,2,7});
    Solution s;
    s.minSetSize(vec);
}