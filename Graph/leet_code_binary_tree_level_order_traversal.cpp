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
        vector < vector < int > > ans;
        ans.clear();
        if(!root) return ans;
        queue < TreeNode* > q, temp_q;
        q.push(root);
        vector < int > v;
        v.clear();
        // v.push_back(root->val);
        while(!q.empty()) {
            TreeNode *temp = q.front();
            v.push_back(temp->val);
            if(temp->left) temp_q.push(temp->left);
            if(temp->right) temp_q.push(temp->right);
            q.pop();
            if(q.empty()) {
                ans.push_back(v);
                v.clear();
                swap(q, temp_q);
            }
        }

        return ans;
    }
};
