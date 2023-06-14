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
    vector<int> data;

    void inOrder(TreeNode* root) {
        if (root == NULL)
            return;
        
        inOrder(root->left);
        data.push_back(root->val);
        inOrder(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        
        inOrder(root);
        int ans = INT_MAX;
        for (int i=0; i<data.size()-1; i++) {
            int diff = data[i+1] - data[i];

            if (diff < ans)
                ans = diff;
        }

        return ans;
    }
};
