#include <iostream>
using namespace std;

// int PeakElement(int arr[], int n) {
//     int start=0;
//     int end=n-1;

//     int index=1;

//     while(start<=end){
//         int mid=start+(end-start)/2;

//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//             return mid;
//         }
//         else if(arr[mid]>arr[mid-1]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
// }

// int findMin(vector<int>& nums) {

//         int start=0;
//         int end=nums.size()-1;
//         int ans=nums[0];
//         int mid;

//         while(start<=end){
//             mid=start+end-start/2;

//             if(nums[mid]>nums[0]){
//                 start=mid+1;
//             }
//             else
//                ans=nums[mid];
//                end=mid-1;

//         }

//         return ans;
// }

int searchElement(int nums[], int target, int n)
{
    int start = 0;
    int end = n - 1; // Correct initialization of end
    int mid;

    while (start <= end)
    { // Include the case when start == end
        mid = start + (end - start) / 2;

        if (nums[mid] == target)
        {
            return mid; // Found the target
        }

        // Determine whether the mid is in the left or right sorted part
        if (nums[mid] >= nums[start])
        {
            // Left part is sorted
            if (target >= nums[start] && target < nums[mid])
            {
                end = mid - 1; // Target is in the left part
            }
            else
            {
                start = mid + 1; // Target is in the right part
            }
        }
        else
        {
            // Right part is sorted
            if (target > nums[mid] && target <= nums[end])
            {
                start = mid + 1; // Target is in the right part
            }
            else
            {
                end = mid - 1; // Target is in the left part
            }
        }
    }

    return -1; // Target not found
}

int findKthPositive(int arr[], int n, int k)
{
    int start = 0, end = n - 1, mid, ans = n;

    while (start <= end)
    {

        mid = start + (end - start) / 2;

        if (arr[mid] - mid - 1 >= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans + k;
}

int main()
{
    cout << "Happy new year 😊" << endl;

    // int arr[]={1,2,3,4,5,6,7,8,9,17,11,10,9,8,7};
    // int n=15;
    // int peak = PeakElement(arr, n);
    // cout << "Peak Element is: " << peak << endl;

    // cout << "Minimum element in the array is: " << findMin(arr) << endl;

    // int nums[] = {4,5,6,7,0,1,2};
    // int n=7;
    // int target = 0;
    // cout << "Element found at index: " << searchElement(nums, target,n) << endl;

    int nums[] = {1,2,3,4,5,6,7};
    int n=7;
    int k = 7;
    cout << "kth positive element is: " << findKthPositive(nums, n,k) << endl;
}
