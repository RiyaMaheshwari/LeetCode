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
        void f(TreeNode* root, int t, vector<vector<int>> &ans, vector<int> &ds)
        {
               if(root==NULL)
                return;
                ds.push_back(root->val);
                t=t-root->val;
                if(t==0){
                if(root->left==NULL && root->right==NULL)
                     ans.push_back(ds);
                }
                f(root->left, t, ans, ds);
                
                f(root->right, t, ans, ds);
                   ds.pop_back();
        }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
            vector<vector<int>> ans;
            vector<int> ds;
            if(root==NULL)
                return ans;
            f(root, targetSum, ans, ds);
            return ans;
    }
};