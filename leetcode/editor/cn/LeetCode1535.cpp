#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution{
public:
    int getWinner(vector<int>& arr, int k){
        int n = arr.size();
        deque<int> dq;
        for (int i = 1; i < n; i++) dq.push_back(arr[i]);
        // 开始模拟
        int cur = arr[0], count = 0;
        while (count != k){
            if (cur > dq.front()){
                count++;
                int t = dq.front();
                dq.pop_front();
                dq.push_back(t);
            }
            else{
                count = 0;
                count++;
                dq.push_back(cur);
                cur = dq.front();
                dq.pop_front();
            }

            if(count > n) break;
        }
        return cur;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main(){
    Solution s;
    vector<int> arr({1,25,35,42,68,70});
    s.getWinner(arr,1);
}