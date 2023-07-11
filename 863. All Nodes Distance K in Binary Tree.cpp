/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*, TreeNode*> parent;
    void inOrder(TreeNode* root) {
        if (root == NULL)
            return;
        
        if (root->left != NULL)
            parent[root->left] = root;
        inOrder(root->left);

        if (root->right != NULL)
            parent[root->right] = root;
        inOrder(root->right);
    }

    void BFS (TreeNode* target, int k, vector<int>& ans) {
        queue<TreeNode*> que;
        que.push(target);

        unordered_set<int> visited;
        visited.insert(target->val);

        while (! que.empty()) {
            int n = que.size();
            if (k == 0)
                break;
            
            while (n--) {
                TreeNode* current = que.front();
                que.pop();

                    //  Left
                if (current->left != NULL && !visited.count(current->left->val)) {
                    que.push(current->left);
                    visited.insert(current->left->val);
                }

                    //  Right
                if (current->right != NULL && !visited.count(current->right->val)) {
                    que.push(current->right);
                    visited.insert(current->right->val);
                }

                    //  Parent
                if (parent.count(current) && !visited.count(parent[current]->val)) {
                    que.push(parent[current]);
                    visited.insert(parent[current]->val);
                }
            }
            k--;
        }

        while (!que.empty()) {
            TreeNode* temp = que.front();
            que.pop();
            ans.push_back(temp->val);
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;

        inOrder(root);

        BFS(target, k, ans);

        return ans;
    }
};
