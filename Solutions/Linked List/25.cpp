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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr) return nullptr;
        if(head->next==nullptr) return head;
        int count = 0;
        ListNode *pend = head;
        while(count<k){
            if(pend==nullptr) return head;
            pend = pend->next;
            count++;
        }
        pend = reverseKGroup(pend,k);
        while(count>0){
            ListNode *tmp = head->next;
            head->next = pend;
            pend = head;
            head = tmp;
            count--;
        }
        head = pend;
        return head;
    }
};
