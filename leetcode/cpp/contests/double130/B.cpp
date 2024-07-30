#include <bits/stdc++.h>
using namespace std;


int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
    int n = points.size();
    unordered_map<int,vector<int>> map;
    set<int> pq;
    for(int i = 0; i < n; i++) {
        int max_idx = max(abs(points[i][0]),abs(points[i][1]));
        map[max_idx].push_back(i);
        pq.insert(max_idx);
    }
    // 逐层遍历
    int ans = 0;
    unordered_set<char> char_set;
    for(int num:pq) {
        cout<<num<<endl;
        vector<int> t = map[num];
        for(int j = 0; j < t.size(); j++) {
            if(char_set.find(s[t[j]])!=char_set.end()){
                return ans;
            }else{
                char_set.insert(s[t[j]]);
            }
        }
        ans  = char_set.size();
    }

    return ans;
}