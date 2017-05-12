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

    bool g=false;

public:

   void receive(TreeNode* ro,int sum,int temsum)

    {

       if(ro!=NULL)

       {

             if ((ro->left==NULL)&&(ro->right==NULL))

             {

                 if(sum== temsum+ro->val)

                 {

                     g=true;

                 }

             }

             else

             {

                 if(ro->left!=NULL)

                 {

                 receive(ro->left,sum,temsum+(ro->val));

                 }

                 if(ro->right!=NULL)

                 {

                 receive(ro->right,sum,temsum+(ro->val));

                 }

             }

       }

    }

    bool hasPathSum(TreeNode* root, int sum) 

    {

          if(root==NULL)

          {

              return false;

          }

          if(root->val==sum)

          {

              if((root->left==NULL)&&(root->right==NULL))

                  {

                      return true;

                  }

              return false;

              

          }

          

           receive(root->left,sum,root->val);

           if(g!=true)

           {

           receive(root->right,sum,root->val);

           }

           if(g==true)

           {

               return true;

           }

           else

           {

               return false;

           }

    }

};