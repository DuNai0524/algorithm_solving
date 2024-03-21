#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>> pq; // 小顶堆
        int m = matrix.size(),n = matrix[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n ;j++) {
                pq.push(matrix[i][j]);
            }
        }
        int count = 1;
        while(count < k) {
            pq.pop();
            count++;
        }
        return pq.top();
    }
};
//leetcode submit region end(Prohibit modification and deletion)
