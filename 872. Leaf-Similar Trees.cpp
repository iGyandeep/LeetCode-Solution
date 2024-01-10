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

    void inOrder(TreeNode* root, vector<int> &v) {
        if (root == NULL)
            return;
        
        if (root->left == NULL && root->right == NULL) {
            v.push_back(root->val);
            return;
        }

        inOrder(root->left, v);
        inOrder(root->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;

        inOrder(root1, v1);        
        inOrder(root2, v2);

        if (v1 == v2)
            return true;
        return false;        
    }
};
