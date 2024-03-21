#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool cmp(const int a,const int b) {
        return a>b;
    }

    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int count = 0,ans = 0,count_c = 0;;
        sort(capacity.begin(), capacity.end(),cmp);
        for(int i:apple)count+=i;
        for(int i=0;i<capacity.size();i++) {
            count_c += capacity[i];
            ans++;
            if(count_c>=count)break;
        }
        return ans;
    }
};