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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;

        queue < TreeNode * > q, temp_q;

        q.push(root);

        int cnt = 0;

        while(!q.empty()) {
            TreeNode *temp = q.front();
            q.pop();

            if(temp->left) temp_q.push(temp->left);
            if(temp->right) temp_q.push(temp->right);
            if(q.empty()) {
                cnt++;
                swap(q, temp_q);
            }
        }

        return cnt;
    }
};
