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
    void helper(TreeNode* root, string& s) {
        if (root == NULL) {
            s += "null,";
            return;
        }

        s += to_string(root->val) + ",";
        helper(root->left, s);
        helper(root->right, s);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        string s1, s2;
        helper(root, s1);
        helper(subRoot, s2);

        return s1.find(s2) != string::npos;
    }
};
