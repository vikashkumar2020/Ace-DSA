// https://leetcode.com/problems/maximum-subarray/


// kadane algorithm is not used here assuming that all numbers can be negative in array
// kadane algorith fails in that case
// DP is used here to solve this problem in O(n) time

#include<bits/stdc++.h>
using namespace std;

    long long maxSubarraySum(int arr[], int n){
        
      
        int curr = arr[0];
        int res = arr[0];
        
        for(int i=1;i<n;i++)
        {
            curr = max(arr[i],curr+arr[i]);
            res = max(res,curr);
        }
        return res;
    }

int main()
{
    int t,n;
    
    cin>>t; 
    while(t--)
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        cout << maxSubarraySum(a, n) << endl;
    }
}