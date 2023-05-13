//heapify
//heapsort
//complete binary tree
//using array
//when we talk about deletion in heap we talk about root node;
#include<bits/stdc++.h>
using namespace std;
class max_heap
{
    public:
    int arr[100];
    int size=0;
    void insert(int val)
    {
        size=size+1;
        arr[size]=val;
        int index=size;
     
        while(index>1)
        {
               int parent=index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else 
            {
                return ;
            }
        }
    }
    void Delete()
    {   
        if(size==0)
        {
            cout<<"Nothing to print"<<endl;
            return ;
        }
        swap( arr[1],arr[size]);
        size--;
        int index=1;
        while(index<size)
        {
            int l=2*index,r=2*index+1;
            if(l<=size && r<=size &&  arr[l]<arr[r])
            {
                swap(l,r);
            }
            if(l<=size&&arr[l]>arr[index])
            {
                swap(arr[l],arr[index]);
                index=l;
            }
            else if(r<=size&&arr[r]>arr[index])
            {
                swap(arr[r],arr[index]);
                index=r;
            }
            else 
            {
                 return ;
            }
        }
    }
   
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
};
class min_heap
{
    public:
    int arr[100];
    int size=0;
    void insert(int val)
    {
        size=size+1;
        arr[size]=val;
        int index=size;
     
        while(index>1)
        {
               int parent=index/2;
            if(arr[parent]>arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else 
            {
                return ;
            
        }
    }
    
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
};
    void heapify()
    {
         
    } 
int main()
{
    max_heap h1;
    min_heap h2;
    h1.insert(55);
    h1.insert(4);
    h1.insert(7);
    h1.insert(8);
    h1.insert(92);
    h1.insert(51);
    h1.print();
    h1.Delete();
     h1.print();
     h2.insert(5);
    h2.insert(4);
    h2.insert(7);
    h2.insert(8);
    h2.insert(9);
    h2.insert(51);
    h2.print();
}