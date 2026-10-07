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
private:
    bool isB = true;
    int helper(TreeNode* root) {
        if (root == 0) return 0;
        int r = helper(root->right);
        int l = helper(root->left);
        if (l - r > 1) {
            isB = false;
        }
        return (1 + max(r, l));
    }
public:
    bool isBalanced(TreeNode* root) {
        helper(root);
        return isB;
    }
};
