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
    struct cmp {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* curr = dummyHead;
        priority_queue <ListNode*, vector<ListNode*>, cmp> q;
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] == nullptr) continue;
            q.push(lists[i]);
        }
        while (!q.empty()) {
            ListNode* nextNode = q.top();
            q.pop();
            curr->next = nextNode;
            curr = curr->next;
            if (nextNode->next != nullptr) q.push(nextNode->next);
        }
        return dummyHead->next;
    }
};
