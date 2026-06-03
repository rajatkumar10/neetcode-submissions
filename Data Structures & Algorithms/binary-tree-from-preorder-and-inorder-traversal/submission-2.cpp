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
int find_ind(vector<int>&arr,int x){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
TreeNode*helper(int s,int e,int &ind,vector<int>&preorder,vector<int>&inorder){
    if(s>e || ind>=inorder.size())return NULL;
    int val=preorder[ind];
    ind++;
    TreeNode*root=new TreeNode(val);
    int res=find_ind(inorder,val);
    root->left=helper(s,res-1,ind,preorder,inorder);
    root->right=helper(res+1,e,ind,preorder,inorder);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        int s=0,e=n-1;
        int ind=0;
        return helper(s,e,ind,preorder,inorder);
    }
};
