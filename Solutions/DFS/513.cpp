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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode *> q;
        int cnt=1,res;
        q.push(root);
        while(!q.empty()){
            int tcnt=0;
            for(int i=0; i<cnt; i++){
                TreeNode *tNode=q.front();
                q.pop();
                if(i==0) res=tNode->val;
                if(tNode->left){
                    q.push(tNode->left);
                    tcnt++;
                }
                if(tNode->right){
                    q.push(tNode->right);
                    tcnt++;
                }
            }
            cnt=tcnt;
        }
        return res;
    }
};
