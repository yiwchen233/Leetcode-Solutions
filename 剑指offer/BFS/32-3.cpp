/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        stack<int> s;
        q.push(root);
        int count=0;
        while(!q.empty()){
            count++;
            int sz=q.size();
            vector<int> tRes;
            for(int i=0; i<sz; i++){
                TreeNode* tNode=q.front();
                q.pop();
                tRes.push_back(tNode->val);
                if(tNode->left!=NULL) q.push(tNode->left);
                if(tNode->right!=NULL) q.push(tNode->right);                
            }
            if(count%2==0){
                for(int i=0; i<tRes.size(); i++) s.push(tRes[i]);
                tRes.clear();
                while(!s.empty()){
                    tRes.push_back(s.top());
                    s.pop();
                }
            }
            res.push_back(tRes);
        }
        return res;
    }
};
