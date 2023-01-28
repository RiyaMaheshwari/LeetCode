/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void parent(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &parent_track, TreeNode* target)
    {
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty())
            {
                    TreeNode* cur=q.front();
                    q.pop();
                    if(cur->left)
                    {
                            parent_track[cur->left]=cur;
                            q.push(cur->left);
                    }
                    if(cur->right)
                    {
                            parent_track[cur->right]=cur;
                            q.push(cur->right);
                    }
            }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*>parent_track;
        parent(root, parent_track, target);
            
        unordered_map<TreeNode*, bool>visited;
            queue<TreeNode*>q;
            q.push(target);
            visited[target]=true;
            int curr_level=0;
            while(!q.empty())
            {
                    int size=q.size();
                    if(curr_level++ == k)
                            break;
                    for(int i=0; i<size; i++)
                    {
                            TreeNode* current=q.front();
                            q.pop();
                            if(current->left && !visited[current->left])
                            {
                                    q.push(current->left);
                                    visited[current->left]=true;
                            }
                            if(current->right && !visited[current->right])
                            {
                                    q.push(current->right);
                                    visited[current->right]=true;
                            }
                            if(parent_track[current] && !visited[parent_track[current]])
                            {
                                    q.push(parent_track[current]);
                                    visited[parent_track[current]]=true;
                            }
                    }
            }
            vector<int> res;
            while(!q.empty())
            {
                    TreeNode* current=q.front();
                    q.pop();
                    res.push_back(current->val);
            }
            return res;
    }
};