#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0, ans = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            sum += arr[i];
            if(i < k - 1) continue;
            else{
                if(sum / k >= threshold) ans++;
                sum -= arr[ i - k + 1 ];
            }
        }
        return ans;
    }
};

int main() {

}