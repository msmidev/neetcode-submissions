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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> results {};
        queue<TreeNode*> q {};
        if (root != nullptr) q.push(root);

        while(!q.empty()) {
            vector<int> subList {};
            
            int length = q.size();
            for(int i = 0; i < length; i++) {
                TreeNode* current = q.front();
                q.pop();
                subList.push_back(current->val);

                if (current->left != nullptr)
                    q.push(current->left);
                if (current->right != nullptr)
                    q.push(current->right);
            }
            results.push_back(subList);
        }

        return results;
    }
};
