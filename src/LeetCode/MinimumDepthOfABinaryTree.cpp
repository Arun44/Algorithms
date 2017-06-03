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

    public:
    int minDepth(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        return abs(comp(root));
    }
    int comp(TreeNode* root)
    {
        if ((root->left==NULL)&&(root->right==NULL))
        {
            return -1;
        }
        else
        {
            if ((root->left!=NULL)&&(root->right!=NULL))
            {
                return max(comp(root->left),comp(root->right))-1;
            }
            else if ((root->left==NULL)&&(root->right!=NULL))
            {
                return comp(root->right)-1;
            }
            else if ((root->left!=NULL)&&(root->right==NULL)
            {
                return comp(root->left)-1;
            }
        }
    }
};