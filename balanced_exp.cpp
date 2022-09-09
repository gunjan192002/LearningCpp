#include<bits/stdc++.h>
using namespace std;

int main()
{     stack<char>st;
string s;
cin>>s;
for(int i=0;i<s.size();i++)
{
    if((s[i]=='[')||(s[i]=='{')||(s[i]=='('))
    {
       st.push(s[i]);
       continue;   
    } 

   if((s[i]=='}')||(s[i]==']')||(s[i]==')'))
    {   if(st.empty())
    {
        cout<<"not     balanced "<<endl;
        return 0;
    }  
     if((st.top()=='('&& s[i]==')')  ||  (st.top()=='{' && s[i]=='}')  ||  (st.top()=='[' && s[i]==']'))
    { st.pop();}
    else
    { cout<<"not balanced "<<endl;return 0;}
    }

}   
    cout<<"balanced"<<endl;
    return 0;

}