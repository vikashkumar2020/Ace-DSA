// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813

#include <bits/stdc++.h>
using namespace std;

void segregateElements(int arr[], int n)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        if (arr[left] < 0 && arr[right] < 0)
            left++;
        else if (arr[left] > 0 && arr[right] < 0)
        {
             swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else if (arr[left] > 0 && arr[right] > 0)
            right --;
        else
        {
            left ++;
            right --;
        }
    }

}

    int main()
    {

        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            int a[n];
            for (int i = 0; i < n; i++)
                cin >> a[i];
            segregateElements(a, n);

            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }