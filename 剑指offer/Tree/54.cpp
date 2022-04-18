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
    int res,cnt=0;
    int kthLargest(TreeNode* root, int k) {
        dfs(root,k);
        return res;
    }
    void dfs(TreeNode *pNode, int k){
        if(pNode==NULL) return;
        dfs(pNode->right,k);
        cnt++;
        if(cnt==k){
            res=pNode->val;
            return;
        }
        dfs(pNode->left,k);
    }
};
