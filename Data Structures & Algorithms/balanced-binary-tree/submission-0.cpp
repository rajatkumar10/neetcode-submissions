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
pair<int,bool>helper(TreeNode*root){
    if(root==NULL){
        return {0,true};
    }
    pair<int,bool>leftans=helper(root->left);
    pair<int,bool>rightans=helper(root->right);
    pair<int,bool>ans;
    bool op1=leftans.second;
    bool op2=rightans.second;
    bool op3=abs(leftans.first-rightans.first)<=1;
    if(op1 && op2 && op3){
        ans.second=true;
        ans.first=max(leftans.first,rightans.first)+1;
    }
    else{
        ans.second=false;
    }
    return ans;
}
    bool isBalanced(TreeNode* root) {
        return helper(root).second;
    }
};
