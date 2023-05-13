class Solution {
    private:
    int minV(TreeNode* root)
    {
        if(root->left){ int minv= minV(root->left);
        return minv;}
        else 
        {
            return root->val;
        }
    }
public:
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)return root;

        if(root->val<key)
        {
            root->right=deleteNode(root->right,key);
            return root;
        }
         if(root->val>key)
        {
            root->left=deleteNode(root->left,key); 
            return root;
        }

         if(root->val==key)
        {   
            //0 child
            if((!root->left)&&(!root->right))
            {   
                delete root;
                return NULL;
            }
           
           // 1 child 
           else if(root->left!=NULL && root->right==NULL)
           {
               TreeNode* temp=root->left;
               delete root; 
               return temp;
           }
           else if (root->right!=NULL && root->left==NULL)
           {
                TreeNode* temp=root->right;
               delete root; 
               return temp;
           }
           // 2 child
           else if((root->left)&&(root->right))
            {
                int minv=minV(root->right);
                root->val=minv;
                root->right=deleteNode(root->right,minv);
                return root;
            }
        }
         
        return root;
    }
};