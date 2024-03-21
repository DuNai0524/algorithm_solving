#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int bitIndex = 0;//用于判断data首字节后一共有几个字节
        for(const int num : data) {
            if(bitIndex == 0) {
                if((num >> 5) == 0b110) bitIndex = 1;
                else if((num >> 4) == 0b1110) bitIndex = 2;
                else if((num >> 3) == 0b11110) bitIndex = 3;
                else if(num >> 7) return false;
            } else {
                if((num >> 6) != 0b10) return false;
                --bitIndex;
            }
        }
        return bitIndex == 0;
    }
};

//leetcode submit region end(Prohibit modification and deletion)
