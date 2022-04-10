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
    TreeNode* mirrorTree(TreeNode* root) {
        if(root==NULL) return root;
        TreeNode* newRight=mirrorTree(root->left);
        TreeNode* newLeft=mirrorTree(root->right);
        root->left=newLeft;
        root->right=newRight;
        return root;
    }
};
