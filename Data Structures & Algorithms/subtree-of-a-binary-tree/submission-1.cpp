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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == 0 || q == 0){
            if (p == q) {
                return true;
            } else {
                return false;
            }
        } else if (p->val != q->val) {
            return false;
        }
        return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
    bool issubroot = false;
public:
    bool helper(TreeNode* root, TreeNode* subRoot) {
        if (!root) {
            return false;
        }
        if (root->val == subRoot->val) {
            issubroot = isSameTree(root, subRoot);
        }
        return (helper(root->left, subRoot) || helper(root->right, subRoot));
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        helper(root, subRoot);
        return issubroot;
    }
};
