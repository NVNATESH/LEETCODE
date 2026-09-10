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
    pair<int, int> dfs(TreeNode* root, int& count) {
        if(!root) return {0, 0};
        pair<int, int> left = dfs(root->left, count);
        pair<int, int> right = dfs(root->right, count);

        if((left.first + right.first + root->val) / (1 + left.second + right.second) == root->val) ++count;
        return {left.first + right.first + root->val, left.second + right.second + 1};
    }
    int averageOfSubtree(TreeNode* root) {
        int count{0};
        dfs(root, count);
        return count;
    }

};