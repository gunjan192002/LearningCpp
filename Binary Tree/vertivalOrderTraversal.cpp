vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,map<int,vector<int>>>mp;
        queue<pair<Node*,pair<int,int>>>q;
        vector<int>ans;
        if(root==NULL)return ans;
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty())
        {  
            pair< Node*,pair<int,int> > temp=q.front();
            Node* frontn=temp.first;
            int hd=temp.second.first;
            int vd=temp.second.second;
            mp[hd][vd].push_back(frontn->data);
                if(frontn->left)
                {
                    q.push(make_pair(frontn->left,make_pair(hd-1,vd+1)));
                }
                if(frontn->right)
                {
                    q.push(make_pair(frontn->right,make_pair(hd+1,vd+1)));
                }
                q.pop();
                
        }
        for(auto i:mp)
        {
            for(auto j:i.second)
            {
                for(auto k:j.second)
                {
                    ans.push_back(k);
                }
            }
        }
        return ans;