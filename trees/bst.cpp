#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int d;
    struct node *l;
    struct node *r;
}Node;
Node * root=NULL;
Node * createnode(int d)
{
    Node * n=(Node*) malloc(sizeof(node));
    n->d=d;
    n->l=NULL;
    n->r=NULL;
    return n;
}
Node* insert(Node * n,int k)
{
    if(n==NULL)
    {
       n=createnode(k);
       return n;
    }
    else if(n->d>k)
    {
        n->l=insert(n->l,k);
    }
    else{
        n->r=insert(n->r,k);
    }
    return n;
}
Node * add(int k)
{
    root=insert(root,k);
}
void inorder(Node* n)
{
    if(n!=NULL)
    {
        inorder(n->l);
        cout<<n->d<<" ";
        inorder(n->r);
    }
    
    
}
int main()
{
    int n,n1;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>n1;
        add(n1);
    }
    inorder(root);
}