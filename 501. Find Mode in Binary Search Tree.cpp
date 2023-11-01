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
    unordered_map<int, int> mp;

    TreeNode* freq(TreeNode* root) {
        if (root == NULL)
            return NULL;
        mp[root->val]++;
        freq(root->left);
        freq(root->right);
        return NULL;
    }
    vector<int> findMode(TreeNode* root) {
        freq(root);
        priority_queue<pair<int, int>> pq;
        for (auto i=mp.begin(); i != mp.end(); i++)
            pq.push({i->second, i->first});
        int max = pq.top().first;
        vector<int> ans;

        while (pq.top().first == max && pq.empty() == false) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
