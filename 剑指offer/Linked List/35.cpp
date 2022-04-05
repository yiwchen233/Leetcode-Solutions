/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        Node* cur = head;
        unordered_map<Node*, Node*> m;
        while(cur!=NULL){
            m[cur] = new Node(cur->val);
            cur = cur->next;
        }
        cur = head;
        while(cur!=NULL){
            m[cur]->next = m[cur->next];
            m[cur]->random = m[cur->random];
            cur = cur->next;
        }
        return m[head];
    }
};
