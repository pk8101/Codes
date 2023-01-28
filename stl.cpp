
#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b)
{
    return a>b;
}
int main()
{
    int a[]={10,20,20,20,30,40,56};
    int n=sizeof(a)/sizeof(int);
    //to search elemnts we use "find" function
    //find function return address of where the key present it accepts initai ,end and key values
    auto p=find(a,a+n,20);
    cout<<p-a<<endl;
    //for binary search the function will be binary_search( a , a+n ,key  );
    //this fun mainly give true or false if the key value present or not
    auto t=binary_search(a,a+n,6);
    cout<<t<<endl;

    //upper bound and lower bound fun's  ,lower_bound fun mainly gives the starting index of the value in container but 
    //upper_bound fun give the ending index of the value in container
    //this operations mainly done in sorted arrays


    auto ub=upper_bound(a,a+n,20);
    cout<<ub-a<<" ";
    auto lb=lower_bound(a,a+n,20);
    cout<<lb-a<<endl;


    //sort(a,a+n);  it will sort in increasing order
    //sort(a,a+n,compare); here compare is an fun but it send it as aurgement in sort fun
    //this aurgemnt compare mainly used to compare between the two element it acts as bubble sort 


    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}