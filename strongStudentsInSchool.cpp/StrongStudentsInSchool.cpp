//User function Template for C++
#include <algorithm>

int diffSum(int n,int m,int arr[])
{
    sort(arr, arr+n);
    int s1= 0, s2= 0;
    
    for(int i= 0; i< m; i++)
    {
        s1+=arr[i];
    }


    for(int i= n-1; i>=n-m; i--)
    {
        s2+=arr[i];
    }

    return s2-s1;
}
