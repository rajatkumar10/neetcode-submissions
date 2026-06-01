class Solution {
public:
int ans;
int helper(TreeNode*root){
    if(root==NULL)return 0;
    int l=helper(root->left);
    int r=helper(root->right);
    int op1=l+r+root->val;
    int op2=max(l,r)+root->val;
    int op3=root->val;
    ans=max({ans,op1,op2,op3});
    return max(op2,op3);
}
    int maxPathSum(TreeNode* root) {
        if(root==NULL)return 0;
        ans=INT_MIN;
        helper(root);
        return ans;
    }
};