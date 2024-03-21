#include <bits/stdc++.h>
using namespace std;

string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string s2 = "abcdefghijklmnopqrstuvwxyz";
string s3 = "0123456789";
string s4 = "~!@#$%^";
// A Z 65 90
// a z 97 122
int main()
{
    // string s;
    // while (cin >> s)
    // {
    //     if (s.length() < 8)
    //     {
    //         cout << "NO" << endl;
    //     }
    //     else
    //     {
    //         bool flag[4] = {false};
    //         for (int i = 0; i < s.length(); i++)
    //         {
    //             if (s1.find(s[i]) != -1)
    //                 flag[0] = true;
    //             if (s2.find(s[i]) != -1)
    //                 flag[1] = true;
    //             if (s3.find(s[i]) != -1)
    //                 flag[2] = true;
    //             if (s4.find(s[i]) != -1)
    //                 flag[3] = true;
    //         }
    //         int count = 0;
    //         for (int i = 0; i < 4; i++)
    //         {
    //             if (flag[i])
    //                 count++;
    //         }
    //         if (count >= 3)
    //             cout << "YES" << endl;
    //         else
    //             cout << "NO" << endl;
    //     }
    // }
    for(int i=122;i>=97;i--){
        cout<<(char)i;
    }
    return 0;
}