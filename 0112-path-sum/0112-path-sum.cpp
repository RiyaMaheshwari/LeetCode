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
        bool f(TreeNode* root, int t)
        {
               if(root==NULL)
                return false;
                t=t-root->val;
                if(t==0){
                if(root->left==NULL && root->right==NULL)
                return true; 
                }
                if(f(root->left, t)==true)
                   return true;
                
                if(f(root->right, t)==true)
                    return true;
                return false;
        }
        
    bool hasPathSum(TreeNode* root, int targetSum) {
            if(root==NULL)
                    return false;
           return f(root,targetSum);
    }
};