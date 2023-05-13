void bfs(int i,int j,vector<vector<int>>vis,vector<vector<char>>grid)//here n==iand m==j
{
      int n=grid.size();
     int m=grid[0].size();
    vis[i][j]=1;
    queue<pair<int,int>q;
    q.push({i,j});
    while(!q.empty()){
         int x=q.front().first;
         int y=q.front().second;
         q.pop();
         // tracvers in the neigbours
         for(int delr=-1;delr<=1;delr++)
         {
             for(int delc=-1;delc<=1;delc++)
             {
                  int nr=x+delr;
                  int nc=y+delc;
                 if(!vis[nr][nc] && nr>=0 &&nc>>0 && nr<n && nc<m &&grid[nr][nc]=='1')
                 {   vis[nr][nc]=1;
                     q.push({nr.nc});
                 }
             }
         }
    }
    
}
 public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
     int count=0;
     int n=grid.size();
     int m=grid[0].size();
     vector<vector<int>>vis(n,vector<int>(m,0));
     
     for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {.  
                if ()
                if( !vis[i][j]&& grid[i][j]=='1')
                {
                    bfs(i,j,vis,grid)
                    count++;
                }
                
                else continue
            }
        }
        return count;
    }