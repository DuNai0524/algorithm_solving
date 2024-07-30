#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode * next;
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * temp;
        ListNode * prev = nullptr;
        ListNode * cur = head;
        while(cur != nullptr){
            temp = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
};