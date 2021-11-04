// Two sum problem in C++

#include <bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (m.find(arr[i]) != m.end())
            return true;
        m[sum - arr[i]] = i;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 11;
    if (twoSum(arr, n, sum))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}