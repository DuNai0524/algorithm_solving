#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(const int a,const int b) {
        return a>b;
    }

    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(),cmp);
        long long ans = 0;
        int count = 0 ;
        int n = happiness.size();
        for(int i = 0;i<n && count<k;i++) {
            if(happiness[i] - count >=0) {
                ans += happiness[i] - count;
            }
            count++;
        }
        return ans;
    }
};

int main() {
    Solution s;
    int a[] = {12,1,42};
    vector<int> vec(a,a+3);
    s.maximumHappinessSum(vec,3);
}