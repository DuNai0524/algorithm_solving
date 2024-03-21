#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        int n = asteroids.size();
        long long t = mass;
        for(int i = 0;i < n;i++) {
            if(t<asteroids[i])return false;
            t += asteroids[i];
            if(t>asteroids[n - 1])return true;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
