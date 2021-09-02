// https://leetcode.com/problems/kth-largest-element-in-an-array/
// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1


// considering not the kth distinct element
#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{
	sort(arr, arr + n);
	return arr[k - 1];
}

 int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
    }


int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        vector<int> num;
        for(int i=0;i<number_of_elements;i++)
		{
            cin>>a[i];
			num.push_back(a[i]);
		}
        int k;
        cin>>k;
        cout<<kthSmallest(a,number_of_elements, k) <<" "<<findKthLargest(num,k)<<endl;
    }
    return 0;
}