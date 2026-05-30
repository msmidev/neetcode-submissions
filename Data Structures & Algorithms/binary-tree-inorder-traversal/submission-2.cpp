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
        vector<int> results {};
        stack<TreeNode*> nodes {};
        TreeNode* current = root;

        while(current != nullptr || !nodes.empty()) {
            while(current != nullptr) {
                nodes.push(current);
                current = current->left;
            }

            current = nodes.top();
            nodes.pop();

            results.push_back(current->val);

            current = current->right;
        }

        return results;
    }
};