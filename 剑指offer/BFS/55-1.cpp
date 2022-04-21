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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int res=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            for(int i=0; i<len; i++){
                TreeNode *tNode=q.front();
                q.pop();
                if(tNode->left!=NULL) q.push(tNode->left);
                if(tNode->right!=NULL) q.push(tNode->right);
            }
            res++;  
        }
        return res;
    }
};
