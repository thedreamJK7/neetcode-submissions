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
    int helper(TreeNode* root) {
        if (root == 0) return 0;
        return 1 + max(helper(root->left), helper(root->right));
    }
public:
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        return abs(helper(root->left) - helper(root->right)) <= 1;
    }
};
