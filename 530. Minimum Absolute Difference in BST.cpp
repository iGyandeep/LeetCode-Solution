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
    int ans = INT_MAX;

    void inOrder(TreeNode* root, TreeNode* &previous) {
        if (root == NULL)
            return;
        inOrder(root->left, previous);
        if (previous != NULL)
            ans = min(ans, root->val - previous->val);
        previous = root;
        inOrder(root->right, previous);
    }

    int getMinimumDifference(TreeNode* root) {
        TreeNode* previous = NULL;
        inOrder(root, previous);

        return ans;        
    }
};
