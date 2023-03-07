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
//         if(root==NULL)
//                 return 0;
//          int l=maxDepth(root->left);
//          int h=maxDepth(root->right);
            
//          return 1+max(l,h);
            vector<vector<int>> ans;
            if(root==NULL)
                    return ans.size();
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty())
            {
                  int n=q.size();
                    vector<int> level;
                    for(int i=0; i<n; i++)
                    {
                            TreeNode* node=q.front();
                            q.pop();
                            if(node->left!=NULL)
                                    q.push(node->left);
                            if(node->right!=NULL)
                                    q.push(node->right);
                            level.push_back(node->val);
                    }
                    ans.push_back(level);
            }
            return ans.size();
    }
};