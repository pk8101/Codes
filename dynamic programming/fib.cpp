#include<bits/stdc++.h>
using namespace std;
//iterative way of fib
int fib(int n)
{ 
    int a[100]={0};
    a[0]=0;
    a[1]=1;
    cout<<a[0]<<" "<<a[1]<<" ";
    if(n==0)
    {
        return 0;
    }
    if(n==1)
        return 1;
    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
        cout<<a[i]<<" ";
    }
    return a[n]; 
}
//recursive way not correct
int fibb(int n)
{
    int a[n]={0};
    // a[0]=0,a[1]=1;
    // cout<<a[0]<<" "<<a[1]<<" ";
    if(n==0) return 0;
    if(n==1) return 1;
    if(a[n]!=0)
    {
        return a[n];
    }
    return a[n]=fibb(n-1)+fibb(n-2);
}
int main()
{
    cout<<fibb(10);
}
