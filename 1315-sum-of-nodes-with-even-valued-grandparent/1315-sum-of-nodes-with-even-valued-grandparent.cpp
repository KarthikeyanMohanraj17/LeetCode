/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void call(TreeNode* root, int gp, int f, int& count)
        {
            if(root==NULL)return;
            if(gp%2==0)count+=root->val;
            gp=f;
            f=root->val;
            
            call(root->left, gp,f,count);
            call(root->right,gp,f,count);
            return;
        }
        int sumEvenGrandparent(TreeNode *root) {
            
            int count=0;
            call(root, -1,-1,count);
            return count;
                
            
            
        }
};