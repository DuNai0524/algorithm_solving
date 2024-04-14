#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MyCalendarTwo {
public:
    vector<pair<int,int>> calendar;
    vector<pair<int,int>> overorange;
    MyCalendarTwo() {

    }

    bool book(int start, int end) {
        for(auto p:overorange) {
            int l = p.first, r = p.second;
            if(l < end && start < r) {
                return false;
            }
        }

        for(auto p:calendar) {
            int l = p.first, r = p.second;
            if(l < end && start < r) {
                pair<int,int> tp(max(l,start),min(r,end));
                overorange.push_back(tp);
            }
        }
        pair<int,int> p(start,end);
        calendar.push_back(p);
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
}