// https://leetcode.com/problems/find-the-duplicate-number/

#include <bits/stdc++.h>
using namespace std;

 int duplicates(vector<int>& nums) {
        int curr_1 = nums[0];
        int curr_2 = nums[0];
        while (1) {
            curr_1 = nums[curr_1];
            curr_2 = nums[nums[curr_2]];
            if (curr_1 == curr_2) break;
        }
        curr_1 = nums[0];
        while (curr_1!=curr_2) {
            curr_1 = nums[curr_1];
            curr_2 = nums[curr_2];
        }
        return curr_2;

        // method 2
        // unordered_map<int, int> m_map;
        // for(const auto& n : nums)
        // {
        //     if(m_map.count(n) > 0)
        //         return n;
            
        //     m_map[n]++;
        // }
    
    }

    int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

      int ans = duplicates(a);
        cout<<ans;
        cout << endl;
    }
    return 0;
}