// WWAP to do BFS and find the sum of nodes and sum of nodes at level k 


#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int t)
    {
        data = t;
        left = NULL;
        right = NULL;
    }
};
int sum=0;
void bfs(node *root)
{
    if (root == NULL)
        return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while (!q.empty())
    {    node *n=q.front();
            q.pop();
        if (n)
        {
            sum=sum+n->data;
            cout << n->data << " ";
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
        else if((!q.empty()))
        {
            q.push(NULL);
        }
        
    }
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);d
    bfs(root);cout<<endl;
    cout<<sum<<endl;
    return 0;
}
