#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,int> memory;
    int integerReplacement(int n) {
        if(n == 1)return 0;
        if(memory.count(n)) {
            return memory[n];
        }
        if(n%2==0) {
            return memory[n] = 1 + integerReplacement(n/2);
        }
        return memory[n] = 2 + min(integerReplacement(n / 2),integerReplacement(n / 2 + 1));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}