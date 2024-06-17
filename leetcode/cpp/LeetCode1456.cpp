#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0, vowel = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                vowel ++;
            }

            if(i < k - 1)continue;

            ans = max(vowel,ans);

            char out = s[i - k + 1];
            if(out == 'a' || out == 'e' || out == 'i' || out == 'o' || out == 'u'){
                vowel --;
            }

        }

        return ans;
    }
};

int main () {

}