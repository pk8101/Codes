#include<bits/stdc++.h>
using namespace std;
//linear search using recursion
int linear(int a[],int target,int s,int si)
{
    if(si<s)
    {
        return -1;
    }
    if(target==a[s])
    {
        return s;
    }
    return linear(a,target,s+1,si);
}
//binary search using recursion
int binarySearch(int arr[], int s, int e, int target) {
   if (s <= e) {
      int m = s+(s + e)/2;
      if (arr[m] == target)
         return m ;
      if (arr[m] > target)
         return binarySearch(arr, s, m-1, target);
      if (arr[m] < target)
         return binarySearch(arr, m+1, e, target);
   }
   return -1;
}
int main()
{
    
}