
#include <iostream>
using namespace std;

int findPages(int arr[], int k, int n)
{
    // code here

    int m = k;

    if (m > n)
    {
        return -1;
    }

    int start = 0, end = 0, mid, ans;

    for (int i = 0; i < n; i++)
    {

        start = max(start, arr[i]);
        end += arr[i];
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int pages = 0, count = 1;

        for (int k = 0; k < n; k++)
        {

            pages += arr[k];

            if (pages > mid)
            {
                count++;
                pages = arr[k];
            }
        }

        if (count <= m)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    return ans;
}

int printpartition(int arr[], int n, int k)
{

    int m = k;

    int start = 0, end = 0, mid, ans;

    for (int i = 0; i < n; i++)
    {

        if (start < arr[i])
        {
            start = arr[i];
        }
        end += arr[i];
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int pages = 0, count = 1;

        for (int k = 0; k < n; k++)
        {

            pages += arr[k];

            if (pages > mid)
            {
                count++;
                pages = arr[k];
            }
        }

        if (count <= m)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    return ans;
}

int shipPackage(int arr[], int n, int k)
{
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++)
    {
        start = max(start, arr[i]);
        end += arr[i];
    }

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int pages = 0;
        int count = 1;

        for (int i = 0; i < n; i++)
        {
            pages += arr[i];
            if (pages > mid)
            {
                count++;
                pages = arr[i];
            }
        }
        if (count <= k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}



int main()
{
    // book allocation problem
    int arr[] = {12, 34, 67, 90};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findPages(arr, k, n);
    cout << endl;
    

    // painter partition problem

    int arrt[] = {5, 10, 30, 20, 15};
    int kt = 3;
    int nt = 5;
    int res = printpartition(arrt, nt, kt);
    cout << res << endl;
    // painter partition problem

    int ship[] = {8,9,10};
    int days = 3;
    int shiplength = 3;
    int shippkg = shipPackage(ship, shiplength, days);
    cout << shippkg << endl;
}