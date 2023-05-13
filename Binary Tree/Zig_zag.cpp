 vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	
    	vector<int>ans;
    	if(root==NULL)return ans;
    	queue<Node*>q;
    	q.push(root);
    	bool ltor=true;
    	while(!q.empty())
    	{  
    	    int n=q.size();
    	    vector<int>result(n);
    	    for(int i=0;i<n;i++)
    	    {  
    	        Node* frontnode=q.front();
    	        q.pop();
    	        int index=ltor?i:n-i-1;
    	        result[index]=frontnode->data;
    	        if(frontnode->left)
    	        {
    	            q.push(frontnode->left);
    	        }
    	        if(frontnode->right)
    	        {
    	            q.push(frontnode->right);
    	        }
    	    }
    	    for(auto i:result )
    	    {
    	        ans.push_back(i);
    	    }
    	    ltor=!ltor;
    	}
    	return ans;
    }