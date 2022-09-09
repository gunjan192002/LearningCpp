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
void preprint(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << "   ";
    preprint(root->left);
    preprint(root->right);
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << "   ";
    inorder(root->right);
}
void postorder(node *root)
{
    if(root==NULL)return;
    postorder (root->left);
    postorder(root->right);
    cout<<root->data<<"   ";
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    preprint(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout<<endl;
    return 0;
}