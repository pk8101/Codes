#include<bits/stdc++.h>
using namespace std;
int q[100];
int f=-1,r=-1;
int enqueue(int n)
{
    r=(r+1)%100;
    if(f==r)
    {
        cout<<"queue is full";
        return -1;
    }
    else
    {
        q[r]=n;
        if(f==-1)
        {
            f=r;
        }

    }
   
}
int dequeue()
{
    if(f==r==-1)
    {
        cout<<"queue is empty ";
    }
    else
    {
        int temp =q[f];
        if(f==r)//if only one element is present
        {
            f=r=-1;
        }
        f=(f+1)%100;//more than one element present
        return temp;
    } 
}
int main()
{
    
}
