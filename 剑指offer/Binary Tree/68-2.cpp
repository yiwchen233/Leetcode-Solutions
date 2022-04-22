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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root==p||root==q) return root;
        TreeNode *lCA=lowestCommonAncestor(root->left,p,q);
        TreeNode *rCA=lowestCommonAncestor(root->right,p,q);
        if(lCA!=NULL&&rCA!=NULL) return root;
        if(lCA!=NULL) return lCA;
        if(rCA!=NULL) return rCA;
        return NULL;
    }
};
