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

    vector<int> lst; vector<int> rst;
    public:
    bool isSymmetric(TreeNode* root) 
    {
         if(root==NULL)
        {
            return true;
        }
        if ((root->left!=NULL)&&(root->right!=NULL))
        {
            leftcall(root->left);
            rightcall(root->right);
        }
        else
        {
            if((root->left==NULL)&&(root->right==NULL))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        if(lst.size()!=rst.size())
        {
           return false;
        } 
        else
        {
            for(unsigned int i=0;i<lst.size();i++)
            {
                 if(lst.at(i)!=rst.at(i))
                 {
                     return false;
                 }
            }
        }
        return true;
    }
    void leftcall(TreeNode* root)
    {
         if(root==NULL){return;}
         lst.push_back(root->val);
         if((root->left==NULL)&&(root->right!=NULL))
         { 
            lst.push_back(-1);
         }
         leftcall(root->left);
         if((root->left!=NULL)&&(root->right==NULL))
        {
             lst.push_back(-1);
        }
         leftcall(root->right);
    }
    void rightcall(TreeNode* root)
    {
        if(root==NULL){return;}
        rst.push_back(root->val);
        if((root->left!=NULL)&&(root->right==NULL))
        {
           rst.push_back(-1);
        } 
        rightcall(root->right);
        if((root->left==NULL)&&(root->right!=NULL))
        {
           rst.push_back(-1);
        }
        rightcall(root->left);
    }
};