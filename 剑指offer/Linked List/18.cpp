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
    ListNode* deleteNode(ListNode* head, int val) {
        if(head==NULL) return NULL;
        if(head->val==val) return head->next;
        ListNode* pre=head,* cur=head->next;
        while(cur!=NULL){
            if(cur->val!=val){
                pre=cur;
                cur=cur->next;
            }
            else{
                pre->next=cur->next;
            break;
            }
        }
        return head;
    }
};
