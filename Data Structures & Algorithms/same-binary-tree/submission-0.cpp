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
    int helper(TreeNode* p, TreeNode* q) {
        if (p == 0 || q == 0){
            if (p == q) {
                return 1;
            } else {
                return 0;
            }
        } else if (p->val != q->val) {
            return 0;
        }
        int l = helper(p->left, q->left);
        int r = helper(p->right, q->right);
        return (l && r ? 1 : 0);
    };
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
       if (helper(p, q)) {
            return true;
       }
       return false;
    }
};
