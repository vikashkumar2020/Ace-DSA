// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int a = arr[n-1];
    int prev = arr[0];
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];

    }
    
    
    arr[0]=a;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n] , i;
        for(i=0;i<n;i++)
        cin>>a[i];
        rotate(a, n);
        for (i = 0; i < n; i++)
            cout<<a[i]<<" ";
        printf("\n");
    }
        return 0;
}

