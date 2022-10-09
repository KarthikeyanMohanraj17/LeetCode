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
    bool call(TreeNode* root, int k, unordered_map<int,int>& mapp )
    {
        if(root==NULL)return false;
        
        if(mapp.find(k-root->val)!=mapp.end())return true;
        else
            mapp[root->val]++;
        return (call(root->left,k,mapp)||call(root->right,k,mapp));
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int> mapp;
        return call(root,k,mapp);
        
    }
};