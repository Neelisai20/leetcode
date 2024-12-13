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
    TreeNode* bstToGst(TreeNode* root) {
        
        int nodesum=0;
        bsthelp(root,nodesum);
        return root;
    }
    void bsthelp(TreeNode* root,int &nodesum)
    {
        if(root==NULL)
        {
            return;
        }
        bsthelp(root->right,nodesum);
        nodesum+=root->val;
        root->val=nodesum;
        bsthelp(root->left,nodesum);

    }
};