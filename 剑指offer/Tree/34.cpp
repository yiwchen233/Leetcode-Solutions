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
    vector<vector<int>> res;
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        findPath(root,target,0,{});
        return res;
    }
    void findPath(TreeNode *pNode, int target, int tsum, vector<int> tpath){
        if(pNode==nullptr) return;
        tpath.push_back(pNode->val);
        tsum+=pNode->val;
        if(tsum==target && pNode->left==nullptr && pNode->right==nullptr){
            res.push_back(tpath);
            return;
        }
        findPath(pNode->left, target, tsum, tpath);
        findPath(pNode->right, target, tsum, tpath);
        tpath.pop_back();
    }
};
