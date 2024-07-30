#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[0]<b[0];
    }

    int countDays(int days, vector<vector<int>>& meetings) {
        int ans = 0,n = meetings.size();
        sort(meetings.begin(), meetings.end(),cmp);
        int min_right = days;
        int min_left = days;
        for(int i = 0; i < n - 1; i++){
            if(meetings[i][1] < meetings[i + 1][0]){
               ans += meetings[i + 1][0] - meetings[i][1] - 1;
            }else{
                meetings[i + 1][0] = min(meetings[i][0],meetings[i + 1][0]);
                meetings[i + 1][1] = max(meetings[i][1],meetings[i + 1][1]);
            }
            min_right = min(min_right,days - meetings[i][1]);
            min_left = min(min_left,meetings[i][0] - 1);
        }
        min_right = min (min_right,days - meetings[n - 1][1]);
        min_left = min(min_left,meetings[n - 1][0] - 1);
        ans += min_right;
        ans += min_left;
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> meetings;
    meetings.push_back({3,4});
    meetings.push_back({4,8});
    meetings.push_back({2,5});
    meetings.push_back({3,8});
    s.countDays(8,meetings);

}