#include <iostream>
#include <string>
using namespace std;

void getNext(int* next,string s) {
    int j = 0;
    next[0] = 0;
    for(int i = 1; i < s.size(); i++) {
        while(j>0 && s[i]!=s[j]) {
            j = next[j - 1];
        }
        if(s[i] == s[j])j++;
        next[i] = j;
    }
}

int main() {
    string a,b;
    cin>>a>>b;
    int next[b.size()];
    getNext(next,b);
    int j = 0;
    for(int i = 0; i<a.size();i++) {
        while(j > 0 && a[i] != b[j]) {
            j = next[j - 1];
        }
        if(a[i] == b[j])j++;
        if(j == b.size()) {
            cout<< i - b.size() + 2<<endl;
            j = next[j - 1];
        }
    }
    for(int i:next) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}