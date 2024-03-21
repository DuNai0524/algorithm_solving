#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int ans = 0;

    void backTracking(string tiles,vector<bool>& visited) {
        for(int i = 0;i < tiles.size(); i++) {
            if(i > 0 && tiles[i] == tiles[i - 1] && visited[i - 1] == false)continue;
            if(!visited[i]) {
                visited[i] = true;
                ans++;
                backTracking(tiles,visited);
                visited[i] = false;
            }
        }
    }

    int numTilePossibilities(string tiles) {
        int n = tiles.size();
        sort(tiles.begin(), tiles.end());
        vector<bool> visited(n,false);
        backTracking(tiles,visited);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}