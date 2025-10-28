/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if (root == NULL) {
            return v;
        }
        vector<int> v1;
        unordered_map<TreeNode*, int> mp;
        mp[root] = 1;
        queue<TreeNode*> q;
        q.push(root);
        v1.push_back(root->val);
        while (!q.empty()) {
            TreeNode* ptr = q.front();
            q.pop();
            if (mp.find(ptr) != mp.end()) {
                v.push_back(v1);
                v1.clear();
            }
            if (ptr->left) {
                if (v1.empty()) {
                    mp[ptr->left] = 1;
                }
                v1.push_back(ptr->left->val);
                q.push(ptr->left);
            }
            if (ptr->right) {
                if (v1.empty()) {
                    mp[ptr->right] = 1;
                }
                v1.push_back(ptr->right->val);
                q.push(ptr->right);
            }
        }
        for (auto& i : v1) {
            cout << i << endl;
        }
        return v;
    }
};
