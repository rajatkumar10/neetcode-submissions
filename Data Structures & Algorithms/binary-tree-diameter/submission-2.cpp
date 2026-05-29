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
// pair of int,int diameter,height
pair<int,int>helper(TreeNode*root){
    if(root==NULL){
        return {0,0};
    }
    pair<int,int>op1=helper(root->left);
    pair<int,int>op2=helper(root->right);
    pair<int,int>ans;
    int os1=op1.first;
    int os2=op2.first;
    int os3=op1.second+op2.second;
    ans.first=max({os1,os2,os3});
    ans.second=1+max(op1.second,op2.second);
    return ans;
}
    int diameterOfBinaryTree(TreeNode* root) {
        return helper(root).first;
    }
};
