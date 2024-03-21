#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int t = n*n;
		string tn = to_string(n);
		if(t>=10){
			string str = to_string(t);
			string strt = str.substr(str.size() - tn.size(),str.size());
			int tt = stoi(strt);
			if(n==tt)cout<<"Yes!"<<endl;
			else cout<<"No!"<<endl;
		}else{
			cout<<"No!"<<endl;
		}
	}
	return 0;
}
