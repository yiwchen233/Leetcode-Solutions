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
    vector<int> reversePrint(ListNode* head) {
        vector<int> ans;
        if(head==NULL) return ans;
        if(head->next==NULL) ans.push_back(head->val);
        else{
            ans = reversePrint(head->next);
            ans.push_back(head->val);
        }
        return ans;
    }
};
