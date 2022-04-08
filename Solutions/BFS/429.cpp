/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(root==NULL) return res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            vector<int> tRes;
            for(int i=0; i<sz; i++){
                Node* tNode=q.front();
                q.pop();
                tRes.push_back(tNode->val);
                for(auto child:tNode->children) q.push(child);
            }
            res.push_back(tRes);
        }
        return res;
    }
};
