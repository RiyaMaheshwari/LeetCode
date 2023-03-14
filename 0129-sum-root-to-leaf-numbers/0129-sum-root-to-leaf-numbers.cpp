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
        void f(TreeNode* root, int &ans, int x)
        {
                if(root==NULL)
                        return;
                x = x*10 + root->val; 
                f(root->left, ans, x);
                f(root->right, ans, x);
                if(root->left==NULL && root->right==NULL)
                        ans+=x;
        }
    int sumNumbers(TreeNode* root) {
        int x=0;
            int ans=0;
            f(root,ans,0);
            return ans;
    }
};