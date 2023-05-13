#include<iostream>
#include<unordered_map>
#include<list>
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
  
   
} 
