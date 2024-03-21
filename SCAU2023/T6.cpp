#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stk;
    int n;
    cin>>n;
    while(n--){
        char in;
        cin>>in;
        if(in == 'Q'){
            if(stk.empty()){
                cout<<"zero"<<endl;
            }else{
                int t = stk.top();
                stk.pop();
                cout<<t<<endl;
            }
        }else if(in == 'P'){
            int t;
            cin>>t;
            stk.push(t);
            cout<<"success"<<endl;
        }else{
            cout<<stk.size()<<endl;
        }
    }
    return 0;
}