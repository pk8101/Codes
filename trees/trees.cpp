#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *l;
    struct node *r;
}Node;
Node* root=NULL;
Node * createnode(int data)
{
    Node* newnode=(Node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->l=NULL;
    newnode->r=NULL;
    return newnode;
}
void preorder(Node* n)
{
    if(n!=NULL)
    {
        cout<<n->data<<" ";
        preorder(n->l);
        preorder(n->r);
    }
    
    
}
void postorder(Node* n)
{
    if(n!=NULL)
    {
        cout<<n->data<<" ";
        postorder(n->r);
        postorder(n->l);
    }
    
    
}
void inorder(Node* n)
{
    if(n!=NULL)
    {
        inorder(n->l);
        cout<<n->data<<" ";
        inorder(n->r);
    }
    
    
}
void levelorder(Node * n)
{
    if(n==NULL)
    {
        return ;
    }
    queue<Node*>q;
    q.push(n);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->l)
        {
            q.push(temp->l);
        }
        if(temp->r)
        {
            q.push(temp->r);
        }

    }
}

int maxheight(Node * n)
{
    if(n==NULL)
    {
        return 0;
    }
    int l=maxheight(n->l);
    int r=maxheight(n->r);
    return max(l,r)+1;
}
int size(Node * n)
{
    if(n==0)
    {
        return 0;
    }
    return size(n->l)+size(n->r)+1;
}
Node* search(Node* n,int k)
{
    if(n==NULL || n->data==k)
    {
        return n;
    }
    if(n->data>k)
    {
        return search(n->l,k);
    }
    else{
        return search(n->r,k);
    }

}
void searchtree(int key)
{
    Node* n=search(root,key);
    if(n!=NULL)
    {
        cout<<"key is found"<<key<<endl;
    }
    else{
        cout<<"key is not found "<<key;
    }


}

int main()
{
    root=createnode(5);
    root->l=createnode(6);
    root->r=createnode(7);
    root->l->l=createnode(5);
    root->l->r=createnode(3);
    root->r=createnode(7);
    root->r->l=createnode(2);
    root->r->r=createnode(1);
    cout<<"preorder traversal=";preorder(root);cout<<" \n";
    cout<<"postorder traversal=";postorder(root);cout<<" \n";
    cout<<"inorder traversal=";inorder(root);cout<<"\n";
    cout<<"levelorder traversal=";levelorder(root);cout<<"\n";
    cout<<"height =";cout<<maxheight(root);cout<<"\n";
    cout<<"size=";cout<<size(root);cout<<"\n";
    cout<<"search=";searchtree(4);cout<<"\n";
}