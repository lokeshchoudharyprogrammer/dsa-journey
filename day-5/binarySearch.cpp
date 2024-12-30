#include <iostream>

using namespace std;

void binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            cout << "element found at index " << mid;
            return;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}

int main()
{
    //  binary search time complexity O(logn) and space complexity O(1)

    int arr[] = {1, 2, 3, 4, 5,
                 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    binarySearch(arr, n, 5);
}
