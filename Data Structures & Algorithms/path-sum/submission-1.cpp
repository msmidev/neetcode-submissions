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
        return cumPathSum(root, targetSum, 0);
    }

    bool cumPathSum(TreeNode* root, int targetSum, int currentSum) {
        currentSum += root->val;

        // check current sum if lead node
        if (!root->left && !root->right)
            return currentSum == targetSum;

        // otherwise logical OR the results from each possible subtree
        return (root->left && cumPathSum(root->left, targetSum, currentSum)) ||
                (root->right && cumPathSum(root->right, targetSum, currentSum));
    }
};