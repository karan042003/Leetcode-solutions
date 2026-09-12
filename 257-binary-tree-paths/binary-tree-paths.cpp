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
    void findp(TreeNode* root,vector<string>&ans,string temp)
     {
        temp+=to_string(root->val);
        if(root->left) findp(root->left,ans,temp+"->");//root k left vale
        if(root->right) findp(root->right,ans,temp+"->");//root k right vale
        if(!root->left && !root->right) ans.push_back(temp);//agar aage dead end he toh string ko vectorme push krdo   
     }
    vector<string> binaryTreePaths(TreeNode* root)
     {
        vector<string> ans;
        if(root) findp(root,ans,"");
        return ans;
     } 
};