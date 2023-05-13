 public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>;//r,c,t
         vector<vector<int>>vis;
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 if(grid[i][j]==2)
                 {
                     q.push({{i,j},0});
                     vis[i][j]=2;
                 }
                 else vis[i][j]=0;
             }
         }
         int tm=0;
            int delr[]={-1,0,+1,0};
             int  delc[]={0,-1,0,+1};
          while(!q.empty())
          {
              int r=q.front().first.first;
              int c=q.front().first.second;
              int t=q.front().second;
              tm=max(tm,t);
              q.pop;
              for(int i=0;i<4;i++)
              {
                  int nrow=r+delr[i];
                  int ncol=c+delc[i];
                  
                  if(vis[nrow][ncol]!=2 && nrow>0 && nrow<n && ncol>0 && ncol<m)
                  {
                      q.push({{nrow,ncol}t+1 });
                      vis[nrow][ncol]==1;
                  }
              }
              
          }
         
         
        
    }