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
bool helper(TreeNode*root,int mini,int maxi){
    if(root==NULL)return true;
    bool op3=root->val > mini;
    bool op4=root->val < maxi;
    bool op1=helper(root->left,mini,root->val);
    bool op2=helper(root->right,root->val,maxi);
    if(op1 && op2 && op3 && op4){
        return true;
    }
    return false;
}
    bool isValidBST(TreeNode* root) {
        int mini=-1e9;
        int maxi=1e9;
        return helper(root,mini,maxi);
    }
};
