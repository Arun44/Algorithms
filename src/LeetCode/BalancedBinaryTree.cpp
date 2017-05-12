/**

 * Definition for a binary tree node.

 * struct TreeNode {

 *     int val;

 *     TreeNode *left;

 *     TreeNode *right;

 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}

 * };

 */

#define MAX(a,b) ((a) > (b) ? a : b)
class Solution 
{    
    long long p;long long k;bool g=true;
    public:
    long com(TreeNode *r)
    {
        long long t,e;
        if(r==NULL)
        {
            return 0;
        }
        else
        { 
            t = com(r->right) ;
            e=  com(r->left) ;
            cout << t <<" " <<  e << endl;
            if(g==true)
            { 
               if(abs(t-e)>1)
               {
                    g=false;
               }
            }
            return MAX(t,e)+1;
        }
    }
    bool isBalanced(TreeNode* root) 
    {
       if(root==NULL){return true;}
       else
       { 
           p =com(root->right) ; k =com(root->left)  ;
           cout << p << endl;cout << k << endl;
           if(g!=false)
            {
                if (abs(p-k)>1)
                    {return false;}
                    else{return true;}

            }
            else
            {return false;}

        }
    }
};