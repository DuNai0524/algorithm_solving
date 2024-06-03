#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int count = 1,idx = 0;
        while (candies > 0)
        {
            if(candies >= count){
                ans[idx % num_people] += count;
            }else{
                ans[idx % num_people] += candies;
                break;
            }
            candies -= count;
            idx++;
            count++;
        }
        
        return ans;
    }
};

int main() {

}