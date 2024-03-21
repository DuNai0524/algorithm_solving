#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct cmp {
        bool operator()(pair<int,int>& a,pair<int,int>& b){
            if(a.second > b.second) return true;
            else if(a.second == b.second) {
                if(a.first > b.first)return true;
            }
            return false;
        }
    };

    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<long long> ans;
        long long sum = 0;
        int n = nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pairs;
        vector<bool> flags(n,false);
        for(int i = 0;i < nums.size();i++) {
            pair<int,int> p;
            p.first = i;
            p.second = nums[i];
            pairs.push(p);
            sum += nums[i];
        }

        // while(!pairs.empty()){
        //     cout<<pairs.top().first<<":"<<pairs.top().second<<endl;
        //     pairs.pop();
        // }

        for(auto q:queries) {
            int idx = q[0],k = q[1];
            if(!flags[idx]) {
                sum -= nums[idx];
                flags[idx] = true;
            }
            while ( k > 0 && sum > 0) {
                while(!pairs.empty()) {
                    if(flags[pairs.top().first])pairs.pop();
                    else break;
                }
                flags[pairs.top().first] = true;
                sum -= pairs.top().second;
                k--;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};

int main() {
    Solution s;
    int a[7] = {1,2,2,1,2,3,1};
    vector<int> vec (a,a+7);
    vector<vector<int>> b;
    b.push_back({1,2});
    b.push_back({3,3});
    b.push_back({4,2});
    s.unmarkedSumArray(vec,b);
}