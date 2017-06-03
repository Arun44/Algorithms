class Solution 
{
    public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root==NULL){return NULL;}
        comp(root);
        return root;
    }
    int comp(TreeNode* root)
    {
        if ((root->left==NULL)&&(root->right==NULL))
        {
            return 0;
        }
        else
        {
            if ((root->left!=NULL)&&(root->right!=NULL))
            {
                     /*
                      int lcv = comp(root->left); 
                       TreeNode* q = root->left;
                      int rcv = comp(root->right);
                       TreeNode *qw = root->right;
                       q->val = rcv ;qw->val=lcv;*/
                       comp(root->left);
                       comp(root->right);
                       TreeNode *temp = root->left;
                       root->left = root->right;
                       root->right = temp;
             }
             else if ((root->left!=NULL)&&(root->right==NULL))
            {

                      comp(root->left);
                      TreeNode *temp=root->left;
                      root->left = root->right;
                      root->right = temp;
            }
            else if((root->left==NULL)&&(root->right!=NULL))
            {
                comp(root->right);
                TreeNode *temp=root->left;
                root->left = root->right;
                root->right = temp;
            }
        }
         return 0;
    }
};