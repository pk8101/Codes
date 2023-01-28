#include<bits/stdc++.h>
using namespace std;
int a[100],n=100,top=-1;
int push(int data)
{
    if(top>n-1)
    {
        cout<<"stack is full";
    }
    else{
        top++;
        a[top]=data;
    }

}
int dispaly()
{
    while(top-->=0)
    {
        cout<<a[top+1]<<" ";
    }
    cout<<"stack is empty";
}
int main()
{
    int n;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        push(n);
    }

    dispaly();
    
    

}