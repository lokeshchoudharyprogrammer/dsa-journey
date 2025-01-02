
#include <iostream>
using namespace std;

bool check(int arr[], int k, int limit, int n)
{

    int cnt = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] > limit)
        {
            cnt++;
            pageSum = arr[i];
        }
        else
        {
            pageSum += arr[i];
        }
    }
    return (cnt <= k);
}

int findPages(int arr[], int k, int n)
{

    if (k > n)
        return -1;

    int lo = *max_element(arr.begin(), arr.end());
    int hi = accumulate(arr.begin(), arr.end(), 0);
    int res = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (check(arr, k, mid, n))
        {
            res = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    return res;
}

int MAX_N = 100;
int MAX_K = 100;

int minTime(int arr[], int n, int k)
{
    // Declare dp array and initialize with -1
    int dp[MAX_N][MAX_K];
    memset(dp, -1, sizeof(dp));
    return minimizeTime(0, n, arr, k, dp);
}

int minimizeTime(int curr, int n, int arr[], int k, int dp[MAX_N][MAX_K])
{
    // If all boards are painted, return 0
    if (curr >= n)
        return 0;

    if (k == 0)
        return INT_MAX;

    if (dp[curr][k] != -1)
        return dp[curr][k];

    int currSum = 0;

    int res = INT_MAX;

    for (int i = curr; i < n; i++)
    {
        currSum += arr[i];

        int remTime = minimizeTime(i + 1, n, arr, k - 1, dp);
        int remaining = max(currSum, remTime);

        res = min(res, remaining);
    }

    dp[curr][k] = res;

    return res;
}



int main()
{
    int arr[] = {12, 34, 67, 90};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findPages(arr, k, n);
    cout << endl;
    int  arrt[] = {10, 10, 10, 10};
    int kt = 2;
    int nt = sizeof(arr) / sizeof(arr[0]);
    int res = minTime(arrt, nt, kt);
    cout << res << endl;
}