vector <int> bottomView(Node *root) {
        // Your Code Here
         //Your code here
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        vector<int>ans;
        if(root==NULL)return ans;
        q.push(make_pair(root,0));
        while(!q.empty())
        {   pair<Node*,int> temp=q.front();
            q.pop();
            Node* frontn=temp.first;
            int hv=temp.second;
           {mp[hv]=frontn->data;}
            if(frontn->left)
            {
                q.push(make_pair(frontn->left,hv-1));
            }
            if(frontn->right)
            {
                q.push(make_pair(frontn->right,hv+1));
            }
        }
        for(auto i:mp)
        {
               ans.push_back(i.second);
            
        }
        return ans;
    }