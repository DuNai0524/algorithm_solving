#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void deleteSpace(string &s){
        int slow=0,fast=0;
        while(fast<s.size()){
            if(s[fast]==' ') fast++; //遇到空格就跳过
            else{ //遇到单词
                if(slow) s[slow++] = ' '; //遇到单词先加空格(非开头)
                while(fast<s.size() && s[fast]!=' '){
                    s[slow++] = s[fast++]; //填入单词
                }
            }
        }
        s.resize(slow); //裁剪
    }
    void reverseWord(string &s){
        int begin, end;
        for(begin=0,end=0;end<s.size();end++){ //单词范围在 [begin,end)
            if(s[end]==' '){ //遇到空格即找到一组单词
                reverse(s.begin()+begin,s.begin()+end);
                begin = end+1; //下一组从空格+1开始
            }
        }
        reverse(s.begin()+begin,s.end()); //结尾无空格，特殊处理，或者先手动给结尾加上空格，处理后删除
    }
    string reverseWords(string s) {
        deleteSpace(s); //删除多余空格
        reverse(s.begin(),s.end()); //翻转字符串
        reverseWord(s); //翻转单词
        return s;
    }
};

//leetcode submit region end(Prohibit modification and deletion)
