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
pair<bool,int>helper(TreeNode*root){
    if(root==NULL)return {true,0};
    pair<bool,int>op1=helper(root->left);
    pair<bool,int>op2=helper(root->right);
    pair<bool,int>ans;
    bool r1=op1.first;
    bool r2=op2.first;
    bool r3=abs(op1.second-op2.second)<=1;
    if(r1 && r2 && r3){
        ans.first=true;
    }
    else{
        ans.first=false;
    }
    ans.second=1+max(op1.second,op2.second);
    return ans;
}
    bool isBalanced(TreeNode* root) {
        return helper(root).first;
    }
};
