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
      
        void  inorder(TreeNode * root,vector<int>&v){
                if(root==NULL) return;
              inorder(root->left,v);
                v.push_back(root->val);
                inorder(root->right,v);
                
                return;                
         }
        
    int minDiffInBST(TreeNode* root) {
       vector<int>ans;
            inorder(root,ans);
            int m=INT_MAX;
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size()-1;i++){
                   if(ans[i]!=ans[i+1]) m=min(m,ans[i+1]-ans[i]);
            }
            return m;
    }
};