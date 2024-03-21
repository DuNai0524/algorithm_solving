#include <iostream>
#include <string>
using namespace std;
string s;
int ans = 0;
void backTrace(int left,int right,string cur,int index){
    if(index > s.size())return;
    if(left == 0 && right == 0) {
        ans++;
        return;
    }

    if(left > right)return;

    if(s[index] != '*'){
        if(s[index]=='(' && left > 0){
            backTrace(left - 1,right,cur + '(',index + 1);
        }else if(s[index]==')' && right > 0){
            backTrace(left,right - 1,cur + ')',index + 1);
        }
    }else{
        if(left > 0) {
            backTrace(left - 1,right,cur + '(',index + 1);
        }

        if(right > 0){
            backTrace(left,right - 1,cur + ')',index + 1);
        }
    }


}


int main() {
    cin>>s;
    if(s.size() % 2 == 1){
        cout<<0<<endl;
        exit(0);
    }
    // 回溯
    int n = s.size() / 2;
    backTrace(n,n,"",0);
    cout<<ans<<endl;
    return 0;
}