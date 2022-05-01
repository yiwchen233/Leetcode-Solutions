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
    void inorder(TreeNode *root, vector<int> &nums){
        if(root==nullptr) return;
        inorder(root->left,nums);
        nums.push_back(root->val);
        inorder(root->right,nums);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> nums1,nums2,res;
        inorder(root1,nums1);
        inorder(root2,nums2);
        auto p1=nums1.begin(),p2=nums2.begin();
        while(true){
            if(p1==nums1.end()){
                res.insert(res.end(),p2,nums2.end());
                break;
            }
            if(p2==nums2.end()){
                res.insert(res.end(),p1,nums1.end());
                break;
            }
            if(*p1<*p2) res.push_back(*p1++);
            else res.push_back(*p2++);
        }
        return res;       
    }
};
