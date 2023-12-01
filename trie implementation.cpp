#include<bits/stdc++.h>
using namespace std;
class Trie
{
    public:
    Trie *child[26];
    bool idEnd;
};
Trie *getNode()
{

    Trie *root=new Trie();
    for(int i=0;i<26;i++)
    {
        root->child[i]=NULL;
        root->idEnd=false;
    }
    return root;
}
void insert(Trie *root,string word)
{
    Trie *temp=root;
    for(int i=0;i<word.size();i++)
    {
        if(!temp->child[word[i]-'a'])
        {
            temp->child[word[i]-'a']=getNode();
        }
        temp=temp->child[word[i]-'a'];
    }
    temp->idEnd=true;
}
bool search(Trie *root,string word)
{
    Trie *temp=root;
    for(int i=0;i<word.size();i++)
    {
        if(!temp->child[word[i]-'a'])
        {
           return false;
        }
        temp= temp->child[word[i]-'a'];
    }
    return temp->idEnd;
}
int main()
{
    Trie *root=new Trie();
    insert(root,"gunjan");
    cout<<search(root,"gunjan")<<endl;
}
