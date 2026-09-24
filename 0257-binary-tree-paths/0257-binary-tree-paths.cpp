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
    void solve(TreeNode* root,vector<string>& res,string s){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            s += to_string(root->val);
            res.push_back(s);
            s = "";
            return;
        }
        solve(root->left,res,s+to_string(root->val)+"->");
        solve(root->right,res,s+to_string(root->val)+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string s;
        solve(root,res,s);
        return res;
    }
};