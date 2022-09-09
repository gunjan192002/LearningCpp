//wap to build a bst using array [513427
#include<bits/stdc++.h>
using namespace std;
 class node
{    public:
    int data;
    node *left,*right;

    node(int t)
    {
        data =t;
        left =NULL; 
        right=NULL;
    }
}; 

node* insert(node *root,int val)
{
    if(root==NULL)
    {    node *temp= new node(val);
        return temp;
    }

}
int main ()
{   node* temp=new node(4);
    return 0;
}
