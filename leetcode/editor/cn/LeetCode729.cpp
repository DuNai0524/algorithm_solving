#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MyCalendar {
public:
    vector<pair<int,int>> calendar;
    MyCalendar() {

    }
    
    bool book(int start, int end) {
        for(auto p:calendar) {
            int l = p.first, r = p.second;
            if(l < end && start < r) {
                return false;
            }
        }
        pair<int,int> p(start,end);
        calendar.push_back(p);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}