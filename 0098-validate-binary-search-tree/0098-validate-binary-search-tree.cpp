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
    TreeNode* prev = nullptr; // stores previous node during traversal

    bool isValidBST(TreeNode* root) {
        if (!root) return true;

        // Check left subtree
        if (!isValidBST(root->left)) return false;

        // Check current node
        if (prev != nullptr && root->val <= prev->val) return false;

        // Update prev
        prev = root;

        // Check right subtree
        return isValidBST(root->right);
    }
};
