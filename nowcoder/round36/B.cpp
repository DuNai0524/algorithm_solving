#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,x;
    cin>>n>>m>>x;
    int a[n][m];
    unordered_set<int> orsum;
    int sum=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
            sum+=a[i][j];
        }
    }

    if(sum!=x) {
        cout<<"wrong answer"<<endl;
        exit(0);
    }

    for(int i=0;i<n;i++) {
        int orn_t = a[i][0];
        for(int j=1;j<m;j++) {
            orn_t ^= a[i][j];
        }
        orsum.insert(orn_t);
    }

    for(int i=0;i<m;i++) {
        int orm_t = a[0][i];
        for(int j=1;j<n;j++) {
            orm_t ^= a[j][i];
        }
        orsum.insert(orm_t);
    }

    if(orsum.size()!=1) {
        cout<<"wrong answer"<<endl;
        exit(0);
    }

    cout<<"accepted"<<endl;
    return 0;

}