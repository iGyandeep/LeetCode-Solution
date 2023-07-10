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

/*      DFS (Depth-First Search) Approach   */

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;

        if (root->left == NULL && root->right == NULL)
            return 1;

        int L = root->left != NULL ? maxDepth(root->left) : INT_MIN;
        int R = root->right != NULL ? maxDepth(root->right) : INT_MIN;

        return (1 + max(L, R));
    }
};
