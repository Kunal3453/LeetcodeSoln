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
    int maxdepth=0;
   void solve(TreeNode* root,bool Direction,int depth){
     if(root==NULL){
         return;
         //no icrease in depth
     }
     if(Direction){ //Direction = true   means we move to left node
       solve(root->left,false,depth+1);//and increase the depth by 1 and for zig zig we set the direction as false
          solve(root->right,true,1);//if suppose we we are not going left(as zig zig)so we put depath as 1 and start a new chain 
     }
     else{
        solve(root->right,true,depth+1);//Direction = true   means we move to left node//and increase the depth by 1 and for zig zig we set the direction as false
        solve(root->left,false,1);//if suppose we we are not going right(as zig zig)so we put depath as 1 and start a new chain 
     }
     maxdepth =max(maxdepth,depth);
   }
    int longestZigZag(TreeNode* root) {
        solve(root,true,0);
         solve(root,true,0);
         return maxdepth;
    }
};