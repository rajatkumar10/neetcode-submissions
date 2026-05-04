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
pair<int,int>helper(TreeNode*root){
    if(root==NULL){
        return {0,0};
    }
    pair<int,int>leftans=helper(root->left);
    pair<int,int>rightans=helper(root->right);
    pair<int,int>ans;
    int op1=leftans.first;
    int op2=rightans.first;
    int op3=leftans.second+rightans.second;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(leftans.second,rightans.second)+1;
    return ans;
}
    int diameterOfBinaryTree(TreeNode* root) {
        return helper(root).first;
    }
};
