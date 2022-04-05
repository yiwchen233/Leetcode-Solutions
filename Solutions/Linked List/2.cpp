/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p = new ListNode(-1);
        ListNode *res = new ListNode(-1);
        res->next = p;
        int cur = 0;
        while(l1 != nullptr || l2!=nullptr){
            if(p->val != -1){
                p->next = new ListNode(-1);
                p = p->next;
            }
            if(l1 == nullptr) l1 = new ListNode(0);
            if(l2 == nullptr) l2 = new ListNode(0);
            p->val = l1->val+l2->val+cur;
            cur = p->val/10;
            p->val %= 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(cur!=0){
            p->next = new ListNode(-1);
            p = p->next;
            p->val = cur;
        }
        return res->next;
    }
};
