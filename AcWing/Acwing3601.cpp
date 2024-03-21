#include <iostream>
#include <string>
#include <bitset>
#include <vector>
using namespace std;

int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		int t = s[i];
		vector<int> res(8,0);
		int count = 0;
		for(int i=7;i>=1;i--){
			res[i]=t%2;
			if(t%2==1)count++;
			t>>=1;
		}
		if(count%2==0)res[0]=1;
		else res[0]=0;
		for(int i=0;i<=7;i++)cout<<res[i];
		cout<<endl;
	}
	return 0;
}
