#include<bits/stdc++.h>
using namespace std;
//bubble sort
int sort(int a[],int si)
{
    int i,j;
    for(i=0;i<si;i++)
    {
        for(j=0;j<si-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
//modified insertion sort without using key ,directly using from i as key value
int insertionsort(int a[],int si)
{
    for(int i=0;i<si;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[i])
            {
                swap(a[j],a[i]);
            }
        }
    }
}
//selection sort
int selectionsort(int a[],int si)
{
    int min;
    for(int i=0;i<si-1;i++)
    {
        min=i;
        for(int j=i+1;j<si;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        swap(a[i],a[min]);
       
    }
    
   
}
//merge sort
int merge(int a[],int s,int m,int e)
{
    int i,j,k,n1,n2;
    n1=m-s+1;
    n2=e-m;
    int a1[n1],a2[n2];
    //creating sub left and right arrays
    for(i=0;i<n1;i++)
    {
        a1[i]=a[i+s];
    }
    for(j=0;j<n2;j++)
    {
        a2[j]=a[m+1+j];
    }
    i=0,j=0,k=s;
    //checking both sub arrays with i and j pointers and inserting in actual array using pointer k
    while (i<n1 && j<n2)
    {
        if(a1[i]<=a2[j])
        {
            a[k]=a1[i];

            i++;
        }
        else{

            a[k]=a2[j];
            j++;
        }
        k++;
    }
    //inserting remaining elemets in sub array to actual array
    while(i<n1)
    {
        a[k]=a1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=a2[j];
        j++;
        k++;
    }  
}
int mergesort(int a[],int s,int e)
{
    int m;
    m=s+(e-s)/2;
    if(s<e)
    {
        mergesort(a,s,m);//this will break array into half until it become single element
        mergesort(a,m+1,e);//this will break second half 
        merge(a,s,m,e);//this will merge according to sorting values
    }
}
//quick sort
int quick(int a[],int s,int e)  //it will gives the actual position of pivote value
{
    int pivote=a[e];
    int i=s-1;
    for(int j=s;j<=e;j++)
    {
        if(a[j]<pivote)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
    
}
int quicksort(int a[],int s,int e)
{
    if(s<e)
    {
        int pivote=quick(a,s,e);
        quicksort(a,s,pivote-1);
        quicksort(a,pivote+1,e);
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
    int si=sizeof(a)/sizeof(int);
    
    quicksort(a,0,si-1);
    for(int j=0;j<si;j++)
    {
        cout<<a[j];
    }
        
    
   
   
   
  
   
    
}