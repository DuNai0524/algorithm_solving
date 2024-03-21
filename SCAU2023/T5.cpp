#include <bits/stdc++.h>
using namespace std;
#define MAXN (10000 + 10)
bool st[2510];
vector<int> primes;

bool flag[MAXN];

void get_primes(){
    for(int i = 2;i <= 2500; i++) {
        if(!st[i])primes.push_back(i);
        for(int j = i;j<=2500;j+=i){
            st[j] = true;
        }
    }
}

int main() {
    get_primes();
    // cout<<primes.size()<<endl;
    for(int i = 0;i < primes.size();i++) {
        for(int j = 0;j < primes.size();j++) {
            for(int k = 0;k<primes.size();k++) {
                long long t = primes[i] * primes[j] * primes[k];
                if(t <= MAXN && t >= 0) {
                    flag[t]=true;
                }
            }
        }
    }
    int a,b;
    cin>>a>>b;

    for(int i = a;i<=b;i++) {
        if(flag[i])cout<<i<<" ";
    }
    return 0;
}