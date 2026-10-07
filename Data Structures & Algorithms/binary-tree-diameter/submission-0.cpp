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
    int m_d = 0;
    int recuresiveTree(TreeNode* root) {
        int l_h;
        int r_h;
        int d;
        if (root == nullptr) return 0;
        l_h = recuresiveTree(root->left);
        r_h = recuresiveTree(root->right);
        d = l_h + r_h;
        if (m_d < d)
            m_d = d;
        return (1 + max(l_h, r_h));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int r = recuresiveTree(root);
        return (m_d);
    }
};
