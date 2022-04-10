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
    bool cmp(TreeNode* L, TreeNode* R){
        if(L==NULL && R==NULL) return true;
        if(L==NULL || R==NULL) return false;
        return L->val==R->val && cmp(L->left,R->right) && cmp(L->right,R->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return cmp(root->left,root->right);
    }
};
