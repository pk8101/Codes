#include<bits/stdc++.h>
using namespace std;
//fib  number
int fibr(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return (fibr(n-1)+fibr(n-2));
    }
}
int fib(int n)
{
    return (int) (pow((1+sqrt(5))/2,n))/sqrt(5);
}
//factorial
int fact(int n)
{
    if(n<=1)
    {
        return n;
    }
    return n*fact(n-1);
}
//formula derived is not worked for factorial
int factf(int n)
{
    return (int) ((pow(n,n)-pow(-n,n))/2);
}




template<class t,class t1>
t1 search1(t a[],t1 n,t key)
{
    for(t1 p=0;p<n;p++)
    {
        if(a[p]==key)
        {
            return p;
        }
    }
    return -1;
}
bool compare(pair<int,int>&t,int a)
{
    return t.first>=a;
}
vector<int> twosum(vector<int>&n,int target)
{
   vector<int>p;

    for(int i=0;i<n.size();i++)
    {
        int sum=0;
        for(int j=0;j<n.size();j++)
        {
            sum=(n[i]+n[j]);
            if(sum==target)
            {
                p.push_back(i);
                p.push_back(j);
                break;
            }
        }
        break;
    }
    return p;
}
int main()
{
    int n;
    cout<<" enter the num";
    cin>>n;
    cout<<n;

}