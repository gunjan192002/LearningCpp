 int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>st;
        int m=n;
        while(m>0)
        {
            st.push(--m);
            
        }
        while(st.size()>1)
        {
            int a=st.top();st.pop();
            int b=st.top();st.pop();
            if(M[a][b]==1){st.push(b);}
            else 
            {
                st.push(a);
            }
        }
        int k=st.top();
        for(int i=0;i<n;i++)
        {
          
            if((M[i][k]!=1&& i!=k)||M[k][i]!=0){return -1;}
        }
        return k;
    }