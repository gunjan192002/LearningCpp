 // Your code here
   vector<int> ans;
   queue<Node*>q;
   if(root==NULL){return ans;}
   q.push(root);
   while(!q.empty())
   {
       int n=q.size();
       Node* temp1=q.front();
       for(int i=0;i<n;i++)
       {    Node* temp2=q.front();
           if(temp2->left){q.push(temp2->left);}
              if(temp2->right){q.push(temp2->right);}
           q.pop();
       }
       ans.push_back(temp1->data);
   }
   return ans;
}