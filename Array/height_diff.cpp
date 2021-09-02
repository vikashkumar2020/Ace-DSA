// https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

#include <bits/stdc++.h>
using namespace std;

    int getMinDiff(int arr[], int n, int k) {
        
        sort(arr,arr+n);
        
        int ans = arr[n-1] - arr[0];
        
        int l = arr[n-1]-k;
        int s = arr[0]+k;
        
        int mi,ma;
        
        for(int i=0;i<n;i++)
        {
            mi = min(s,arr[i+1]-k);
            ma =max(l,arr[i]+k);
            
            if(mi<0)
            continue;
            
            ans = min(ma-mi,ans);
        }
        
        return ans;
    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        auto ans = getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
} 