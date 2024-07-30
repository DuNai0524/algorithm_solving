#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode * next;
};

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * slow = head, * fast = head;
        if(head == nullptr || head->next == nullptr ) return false;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast) return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
