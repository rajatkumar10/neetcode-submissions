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
int findmaxi(TreeNode*root,int &maxi){
    if(root==NULL) return 0;
    int left=findmaxi(root->left,maxi);
    int right=findmaxi(root->right,maxi);
    int op1=left+right+root->val;
    int op2=max(root->val,max(left+root->val,right+root->val));
    maxi=max(maxi,max(op1,op2));
    return op2;
}
    int maxPathSum(TreeNode* root) {
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       int maxi=INT_MIN;
       findmaxi(root,maxi);
       return maxi;
    }
};
