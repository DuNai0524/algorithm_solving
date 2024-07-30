#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode * next;
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * p = head;
        while(p->next != nullptr) {
            if(p->val == p->next->val){
                int val = p->val;
                //
                if(p == head){
                    head = p->next;
                    p = p->next;
                }else{

                }
            }else {
                p = p->next;
            }
        }
        return head;
    }
};

int main() {

}