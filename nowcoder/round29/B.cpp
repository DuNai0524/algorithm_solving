#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string day;
    string night;
    cin>>day>>night;
    int sum = 0;
    for(int i=0;i<n;i++) {
        if(day[i]=='N'&&night[i]=='N')continue;
        else if(day[i]=='Y'&&night[i]=='Y')sum+=3;
        else if(day[i]=='Y'&&night[i]=='N')sum+=2;
        else if(day[i]=='N'&&night[i]=='Y')sum+=2;
    }
    cout<<sum<<endl;
    return 0;
}