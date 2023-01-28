#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,n2=0;
    cin>>n;
    n1=sqrt(n);
    for(int i=3;i<n1;i++)
    {
        if(n%i==0)
        {
            n2++;
            break;
        }
    }
    n2>0?cout<<n<<" its not an prime number":cout<<n<<" is a prime number";
}