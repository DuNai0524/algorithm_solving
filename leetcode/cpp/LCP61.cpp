#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int temperatureTrend(vector<int>& temperatureA, vector<int>& temperatureB) {
        int n = temperatureA.size();
        vector<int> vA(n - 1, 0);
        vector<int> vB(n - 1, 0);
        for(int i = 0; i < n - 1; i++) {
            if(temperatureA[i + 1] > temperatureA[i])vA[i] = 1;
            else if(temperatureA[i + 1] == temperatureA[i])vA[i] = 0;
            else vA[i] = -1;

            if(temperatureB[i + 1] > temperatureB[i])vB[i] = 1;
            else if(temperatureB[i + 1] == temperatureB[i])vB[i] = 0;
            else vB[i] = -1;
        }
        int count = 0, max_ans = 0;
        for(int i = 0; i < n - 1; i++) {
            if(vA[i] == vB[i])count++;
            else{
                max_ans = max(count,max_ans);
                count = 0;
            }

            if(i == n - 2)max_ans=max(count,max_ans);
        }
        return max_ans;
    }
};

int main() {

}