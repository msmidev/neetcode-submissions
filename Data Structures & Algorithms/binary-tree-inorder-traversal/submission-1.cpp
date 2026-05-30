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
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == nullptr) return {};

        vector<int> results {};

        auto left = inorderTraversal(root->left);
        results.insert(results.end(), left.begin(), left.end());

        results.push_back(root->val);

        auto right = inorderTraversal(root->right);
        results.insert(results.end(), right.begin(), right.end());

        return results;
    }
};