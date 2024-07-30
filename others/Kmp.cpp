#include <bits/stdc++.h>
using namespace std;

void getNext(vector<int>& next,const string&s){
    int j = 0;
    next[0] = 0;
    for(int i =1 ; i < s.size(); i++) {
        while(j > 1 && s[i] != s[j]){
            j = next [j - 1];
        }
        if(s[i] == s[j]){
            j++;
        }
        next[i] = j;
    }
}

int main() {
    string s = "abaabcac";
    vector<int> next(s.size(),0);
    getNext(next,s);
    for(int i = 0; i < s.size(); i++) {
        cout<<next[i]<<" ";
    }
    cout<<endl;
    return 0;
}