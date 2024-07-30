#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long,vector<long long>, greater<long long>> pq;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < k) {
                pq.push((long long)nums[i]);
            }
        }
        int ans = 0;

        while(!pq.empty()) {
            if(pq.size()>=2) {
                ans++;
                long long x = pq.top();pq.pop();
                long long y = pq.top();pq.pop();
                long long t = min(x,y) * 2 + max(x,y);
                if(t<k)pq.push(t);
            }else if(pq.size() == 1) {
                ans++;
                break;
            }else {
                break;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    int a[5] = {42,46};
    vector<int> nums(a,a+2);
    s.minOperations(nums,42);
}