// https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n)
{

    pair<long long, long long> p;

    long long minim = INT_MAX, maxim = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        minim = min(minim, a[i]);

        maxim = max(maxim, a[i]);
    }
    p.first = minim;
    p.second = maxim;
    return p;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
} 
