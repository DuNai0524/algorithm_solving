#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n = nums1.size();
        unordered_map<int,int> umap;
        for(int a:nums1) {
            for(int b:nums2)umap[a + b]++;
        }

        int count = 0;

        for(int c:nums3) {
            for(int d:nums4) {
                if(umap.find(0 - (c + d))!=umap.end()) {
                    count += umap[0 - (c + d)];
                }
            }
        }
        return count;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
