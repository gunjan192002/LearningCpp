// Impimantation of stack using linked list
#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int t)
    {
         data = t;
        next=NULL;
    }
};
void push(node **n,int t)
{
    node *new_node=new node(t);
    new_node->next=*n;
    *n=new_node;
}
void print(node *n)
{
     while(n!=NULL)
     {
        cout<<n->data<<"  ";
        n=n->next;
     }
}
void pop(node **n)
{   node *temp =*n;
     *n= temp->next;
}
int32_t main()
{
   
     node *head=new node(5);
    push(&head,6);
        push(&head,7);

    push(&head,8);

    push(&head,9);
    push(&head,10);
    pop(&head);
    print(head);
    return 0;
}