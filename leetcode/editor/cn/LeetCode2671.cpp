#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class FrequencyTracker {
public:
    unordered_map<int,int> frequency_map;
    FrequencyTracker() {

    }
    
    void add(int number) {
        frequency_map[number]++;
    }
    
    void deleteOne(int number) {
        if(frequency_map.find(number)!=frequency_map.end() && frequency_map[number] > 0) {
            frequency_map[number]--;
        }
    }
    
    bool hasFrequency(int frequency) {
        for(auto p :frequency_map) {
            if(p.second == frequency)return true;
        }
        return false;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}