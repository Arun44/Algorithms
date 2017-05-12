/**

 * Definition for a binary tree node.

 * struct TreeNode {

 *     int val;

 *     TreeNode *left;

 *     TreeNode *right;

 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}

 * };

 */

 class Solution 
 {   
     vector<vector<int>> ans; 
     public:
     vector<vector<int>> levelOrder(TreeNode* root)  
     {
        compute(root,0);
        return ans;
     }
     void compute(TreeNode* root,int k)
     {
         if (root==NULL) {return;}
         if(ans.size()==k)
         {
            ans.push_back(vector<int>());
         }
         ans[k].push_back(root->val);
         compute(root->left,k+1);
         compute(root->right,k+1);
     }
 };