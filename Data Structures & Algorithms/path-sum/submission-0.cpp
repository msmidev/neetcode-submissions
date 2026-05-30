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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        int currentSum = 0;
        return cumPathSum(root, targetSum, currentSum);
    }

    bool cumPathSum(TreeNode* root, int targetSum, int currentSum) {
        currentSum += root->val;

        if (root->left || root->right) {
        return (root->left && cumPathSum(root->left, targetSum, currentSum)) ||
                (root->right && cumPathSum(root->right, targetSum, currentSum));
        }

        return currentSum == targetSum;
    }
};