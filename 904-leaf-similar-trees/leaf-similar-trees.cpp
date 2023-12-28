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
void util(TreeNode*root1,vector<int>&a1)
{
    if(!root1)
    {
        return;
    }
    if(root1->left==root1->right&&root1->left==NULL)
    {
        a1.push_back(root1->val);
    }
    util(root1->left,a1);
    util(root1->right,a1);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      vector<int>a1,a2;
      util(root1,a1);
      util(root2,a2);
      return a1==a2;
    }
};