
// program to check given linked list has a cycle or nollL
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
        next = NULL;
    }
};

void print(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        if (count == 100)
            return;
        cout << head->data << "  ";
        head = head->next;
        count++;
    }
}
bool checkcycle(node *head)
{
    node *slowptr=head;
    node *fastptr=head;
    while(fastptr!=NULL && fastptr->next!=NULL)
    {   slowptr=slowptr->next;
        fastptr=fastptr->next;
        if(fastptr==slowptr)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    node *head = new node(0);
    node *head1 = new node(1);
    node *head2 = new node(2);
    node *head3 = new node(3);
    node *head4 = new node(4);
    node *head5 = new node(5);
    node *head6 = new node(6);
    node *head7 = new node(7);
    node *head8 = new node(8);
    node *head9 = new node(9);
    node *head10 = new node(10);
    node *head11 = new node(11);
    head->next = head1;
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;
    head5->next = head6;
    head6->next = head7;
    head7->next = head8;
    head8->next = head9;
    head9->next = head10;
    head10->next = head11;
    // head11->next = head6;
    if(checkcycle(head)){
        cout<<"cycle"<<endl;
    }
    else cout<<"not a cycle "<<endl;
    return 0;
}