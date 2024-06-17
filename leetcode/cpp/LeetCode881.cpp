#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        int i = 0;
        int curLimit = limit, ans = 0;
        while(i < n) {
            while(i < n && people[i] <= curLimit) {
                curLimit -= people[i];
                i++;
            }
            ans++;
            curLimit = limit;
        }
        return ans;
    }
};

int main () {
    Solution s;
    vector<int> vec({5,1,4,2});
    s.numRescueBoats(vec,6);

}