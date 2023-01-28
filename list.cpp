#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node * next;
}Node; 
Node* head=NULL;
void insertbeg(int d)
{
    Node* newnode=(Node*) malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=head;
    head=newnode;
}
void insertend(int d)
{
    Node* newnode=(Node*)malloc(sizeof(struct node));
    newnode->data=d;
    newnode->next=NULL;

    Node* temp=head;
    if(temp==NULL)
    {
        head=newnode;
        return;
    }
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    
}
void display()
{
    Node* temp;
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
   int n;
   cin>>n;
   int x;
   for(int i=0;i<n;i++)
   {
    cin>>x;
    insertend(x);

   }
   display();


   
    

}