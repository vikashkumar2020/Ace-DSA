#include <bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
{

    vector<long long int> p(n, 1);
    long long int pro = 1;
    for (int i = 0; i < n; i++)
    {
        p[i] = pro;
        pro = pro * nums[i];
    }
    pro = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        p[i] *= pro;
        pro *= nums[i];
    }
    return p;
}

int main()
{
    int n;
    cin >> n;
    vector<long long int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<long long int> p = productExceptSelf(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}