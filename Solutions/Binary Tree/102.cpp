/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            vector<int> tRes;
            for(int i=0; i<sz; i++){
                TreeNode* tNode=q.front();
                q.pop();
                tRes.push_back(tNode->val);
                if(tNode->left!=NULL) q.push(tNode->left);
                if(tNode->right!=NULL) q.push(tNode->right);                
            }
            res.push_back(tRes);
        }
        return res;
    }
};
