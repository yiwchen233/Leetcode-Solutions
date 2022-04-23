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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        this->preorder=preorder;
        for(int i=0; i<preorder.size(); i++) m[inorder[i]]=i;
        return genTree(0,0,preorder.size()-1);
    }
private:
    vector<int> preorder;
    unordered_map<int,int> m;
    TreeNode *genTree(int root, int left, int right){
        if(left>right) return NULL;
        TreeNode *res=new TreeNode(preorder[root]);
        int i=m[preorder[root]];
        res->left=genTree(root+1,left,i-1);
        res->right=genTree(root+i-left+1,i+1,right);
        return res;
    }
};
