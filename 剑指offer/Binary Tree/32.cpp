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
    vector<int> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* tNode=q.front();
            q.pop();
            res.push_back(tNode->val);
            if(tNode->left!=NULL) q.push(tNode->left);
            if(tNode->right!=NULL) q.push(tNode->right);
        }
        return res;
    }
};
