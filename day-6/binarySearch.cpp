#include <iostream>
using namespace std;

int binarySearchLeft(int arr[], int n, int key)
{
    int left = -1;
    int right = n - 1;
    int first = -1;
    int last = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            first = mid;
            right = mid - 1;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return first;
}
int binarySearchRight(int arr[], int n, int key)
{
    int left = -1;
    int right = n - 1;
    int first = -1;
    int last = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            last = mid;
            left = mid + 1;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return last;
}


int SearchInsertionIndex(int arr[], int n, int target)
{
        int start=0;
        int end=n;

        int index=n;
        int mid;

        while(start<=end){
            mid=start+(end-start)/2;

            if(arr[mid]==target){
                index=mid;

                break;

            }
            else if(arr[mid]<target)
            {
                start=mid+1;
            }else{
                end=mid-1;
                // before goes to left remaining currnt index bcz might be comes in the left side
                index=mid;
            }


        }

        
        return index;
}


int floorSqrt(int n) {
        // Your code goes here
        if (n == 0) return 0;
        int start = 1, end = n, ans;
    
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (mid == n / mid) {  // Avoid mid*mid to prevent overflow
                return mid;
            } else if (mid < n / mid) {
                start = mid + 1;
                ans = mid;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
int main()
{
// find first occurrence of 5 and last occurrence of 5
    int arr[14] = {1, 2, 3, 4, 5, 6, 6, 6, 6, 7, 7, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << binarySearchLeft(arr, n, 99) << endl;
    cout << binarySearchRight(arr, n, 99) << endl;
    cout << SearchInsertionIndex(arr, n, 10) << endl;
    cout << floorSqrt(9) << endl;



   
}