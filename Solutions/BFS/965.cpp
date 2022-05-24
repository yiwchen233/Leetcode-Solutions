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
    bool isUnivalTree(TreeNode* root) {
        if(root==nullptr) return true;
        int num=root->val;
        return isUnivalSubtree(root->left,num) && isUnivalSubtree(root->right,num);
    }
    bool isUnivalSubtree(TreeNode *root, int num){
        if(root==nullptr) return true;
        if(root->val!=num) return false;
        return isUnivalSubtree(root->left,num) && isUnivalSubtree(root->right,num);
    }
};
