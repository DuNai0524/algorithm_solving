#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int compareVersion(string version1, string version2) {
        int idx1 = 0, idx2 = 0;
        string str1 = "",str2 = "";
        while (idx1 < version1.size() || idx2< version2.size()) {
            // 读入数字
            while(idx1 < version1.size() && version1[idx1] >= '0' && version1[idx1] <= '9')str1 += version1[idx1++];
            while(idx2 < version2.size() && version2[idx2] >= '0' && version2[idx2] <= '9')str2 += version2[idx2++];
            if(str1.empty())str1 += '0';
            if(str2.empty())str2 += '0';
            int num1 = stoi(str1);
            int num2 = stoi(str2);
            if(num1 > num2)return 1;
            else if(num1 < num2)return -1;
            str1.clear();
            str2.clear();
            idx1++,idx2++;
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    s.compareVersion("1.0.1","1");
}