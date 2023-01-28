#include<bits/stdc++.h>
using namespace std;
int parent(int i)
{
    return (i-1)/2;
}
int left(int i)
{
    return (2*i)+1;
}
int right(int i)
{
    return (2*i)+2;
}
void heapify(int a[],int n,int i)
{
    int l=left(i);
    int r=right(i);
    int s=i;
    if(l<n && a[s]>a[l])
    {
        s=l;
    }
    if(r<n && a[s]>a[r])
    {
        s=r;
    }
    if(s!=i)
    {
        swap(a[s],a[i]);
        heapify(a,n,s);
    }
    
}
void displayheap(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
//bottom up approach min heap.
void heap(int a[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
}
//top down approach in minn heap
void heaptb(int a[],int n,int e)
{
    a[n]=e;
    while(n!=0 && a[parent(n)]>a[n])
    {
        swap(a[parent(n)],a[n]);
        n=parent(n);
    }
}
//sorting using heap
void heapsort(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        swap(a[0],a[i]);\
        heapify(a,i,0);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"before min heap";displayheap(a,n);
    heap(a,n);
    cout<<"after min heap";displayheap(a,n);


    int b[n];
    int e;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        heaptb(b,i,e);
    }
    cout<<"after min heap";displayheap(b,n);cout<<" \n";
    heapsort(a,n);
    displayheap(a,n);




}