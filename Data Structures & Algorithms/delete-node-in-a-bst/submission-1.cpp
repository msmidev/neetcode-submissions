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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return nullptr; // handle empty case

        if (key < root->val) { // node to delete is on the left
            root->left = deleteNode(root->left, key); // returning new root of left subtree
        } else if (key > root->val) { // node to delete is on the right
            root->right = deleteNode(root->right, key); // returning new root of right subtree
        } else { // root is the node to delete
            if (root->left == nullptr) { // no children or only right
                TreeNode* right = root->right;
                delete root;
                return right;
            } else if (root->right == nullptr) { // no children or only left
                TreeNode* left = root->left;
                delete root;
                return left;
            } else { // node to delete has two children
                TreeNode* min = findMinimumNode(root->right);
                root->val = min->val; // swapping min node and root
                root->right = deleteNode(root->right, min->val); // deleting old min node
            }
        }

        return root; // returning root if root wasn't node to delete or 
    }

    TreeNode* findMinimumNode(TreeNode* root) {
        while (root != nullptr && root->left != nullptr)
            root = root->left;
        return root;
    }
};