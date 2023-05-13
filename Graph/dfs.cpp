
#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<stack>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>>adj;
    void addnode(int u,int v,bool direction)
    {
        adj[u].push_back(v);
        if(!direction)
        {
                    adj[v].push_back(u);

        }
    }
    void print()
    {
        for(auto i:adj)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
        
    }

    void dfs(int n)
    {
        unordered_map<int,bool>visited;
            stack<int>st;
           st.push(n);
            visited[n]=1;
            while(!st.empty())
            {
                int s=st.top();
                cout<<s<<" ";
                st.pop();
            for(auto j:adj[s])
            {
                if(!visited[j]) 
                {
                    visited[j]=1;
                    st.push(j);
                }
            }
            }

    }


    void dfs(int n)
    {

        unordered_map<int,bool>visited;
            queue<int>qu;
            qu.push(n);
            visited[n]=1;
            while(!qu.empty())
            {
                int s=qu.front();
                cout<<s<<" ";
                qu.pop();
            for(auto j:adj[s])
            {
                if(!visited[j]) 
                {
                    visited[j]=1;
                    qu.push(j);
                }
            }
            }

    }
};



int main()
{
    
 int n,m;
  cout<<"enter the number ofthe nodes"<<endl;
  cin>>n;
  cout<<"enter the number of the edges"<<endl;
  cin>>m;
  graph g;
  for(int i=0;i<m;i++)
  {
      int u,v;
      cin>>u>>v;
      //creating an undirected graph
      g.addnode(u,v,0);
  }
  g.print();
  g.bfs(2);
    g.dfs(2);
} 
