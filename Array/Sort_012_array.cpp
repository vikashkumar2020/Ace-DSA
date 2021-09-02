// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// https://leetcode.com/problems/sort-colors/

#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
    int c0 = 0, c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c0++;
        if (arr[i] == 1)
            c1++;
        if (arr[i] == 2)
            c2++;
    }

    for (int i = 0; i < c0; i++)
        arr[i] = 0;

    for (int i = c0; i < (c0 + c1); i++)
        arr[i] = 1;

    for (int i = (c0 + c1); i < n; i++)
        arr[i] = 2;
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
        {
            cin >> a[i];
        }

        sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}