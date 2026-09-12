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
    int diametre=INT_MIN;
    int diameterOfBinaryTree(TreeNode* root) 
    {   
        if(!root) return 0;
        dia(root);
        return diametre;
    }
    int dia(TreeNode* root)
    {
        if(!root) return 0;
        int l=dia(root->left);
        int r=dia(root->right);
        diametre=max(l+r,diametre);
        return 1+max(l,r);
    }
};