/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;

    Node() {}

    Node(int _val) {
        val = _val;
        next = NULL;
    }

    Node(int _val, Node* _next) {
        val = _val;
        next = _next;
    }
};
*/

class Solution {
public:
    Node* insert(Node* head, int insertVal) {
        Node *newNode = new Node(insertVal);
        newNode->next=newNode;
        if(head == NULL) return newNode;
        if(head->next==head){
            head->next=newNode;
            newNode->next=head;
            return head;
        }
        Node *pre=head, *cur=head->next;
        while(cur!=head){
            if(pre->val<=insertVal && insertVal<=cur->val) break;
            if(pre->val>cur->val && (pre->val<=insertVal || insertVal<=cur->val)) break;
            pre=pre->next; cur=cur->next;
        }
        pre->next = newNode;
        newNode->next = cur;
        return head;
    }
};
