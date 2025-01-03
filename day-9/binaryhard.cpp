#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{

    bool swapped;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int aggressiveCows(int stalls[], int k, int n)
{

    // sort(stalls.begin(), stalls.end());
    BubbleSort(stalls, n);

    int start = 1, end = stalls[n - 1] - stalls[0], ans = 0;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int count = 1, pos = stalls[0];
        for (int a = 1; a < n; a++)
        {
            if (pos + mid <= stalls[a])
            {
                count++;
                pos = stalls[a];
            }
        }
        if (count < k)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }

    return ans;
}

int minEatingSpeed(int piles[], int h, int n)
{

    int start = 1, end;

    for (int i = 0; i < n; i++)
    {
        if(piles[i] > end)
        {
            end = piles[i];
        }
    }
    int ans = end;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        long long total_time = 0;
        for (int i = 0; i < n; i++)
        {
            total_time += (piles[i] + mid - 1) / mid;
        }
        if (total_time > h)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    cout << "Hello, World! Day-9" << endl;

    int stalls[] = {1, 2, 8, 4, 9};
    int k = 3;
    int n = 5;
    cout << "Maximum number of cows that can be kept: " << aggressiveCows(stalls, k, n) << endl;

    int piles[] = {3, 6, 7, 11};
    int h = 8;
    int np = 4;
    cout << "Minimum speed required: " << minEatingSpeed(piles, h, np); // 4
}