#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        int i = 0, j = n - 1;
        int curLimit = limit, ans = 0;
        while(i <= j) {
            if(people[i] + people[j] <= limit) i++;
            j--;
            ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)

int main(){
    Solution s;
    vector<int> vec({5,1,4,2,});
    s.numRescueBoats(vec,6);
}