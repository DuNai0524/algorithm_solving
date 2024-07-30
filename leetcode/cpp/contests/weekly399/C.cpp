#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        long long ans = 0;
        unordered_map<int,int> nums_map;
        for(int i:nums2)nums_map[i]++;
        int n = nums1.size();
        for(int i = 0; i < n; i++){
            int t = nums1[i];
            if(k == 1){
                while(t > 0){
                    if(nums_map.find(t) != nums_map.end()){
                        ans += nums_map[t];
                    }
                    if(t % 2 != 0) break;
                    t/=2;
                }
            }else{
                int idx = 1;
                while (k * idx <= t){
                    if(t % (k * idx) != 0){
                        idx++;
                    }else{
                        int p = t / (k * idx);
                        idx ++;
                        if(nums_map.find(p) != nums_map.end())ans += nums_map[p];
                    }
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> nums1({4,3,4,18});
    vector<int> nuns2({4,3,4,18});
    int ans = s.numberOfPairs(nums1,nuns2,1);
    cout<<ans<<endl;
}