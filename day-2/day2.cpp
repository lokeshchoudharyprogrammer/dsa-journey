#include <iostream>
using namespace std;

int main()
{

    // 1. write a program to find x in the array if it is present in the array return its index else return -1.

    // int array[7] = {2, 4, 5, 6, 7, 4, 8};

    // int x = 5;
    // int index = -1;

    // for (int i = 0; i < 7; i++)
    // {
    //     if (array[i] == x)
    //     {
    //         index = i;
    //         break;
    //     }
    // }

    // cout << "Index of x is:  " << index << endl;

    // 2. Write a program to reverse an array of integers.

    // int arr[6] = {2, 4, 5, 6, 7, 4};

    // int start = 0;
    // int end = 5;

    // while (start < end)
    // {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }

    // cout << "Reversed array is:   " << endl;

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // 3. write a program to find second largest element in the array.

    // int max_value = INT_MIN;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] > max_value)
    //     {
    //         max_value = arr[i];
    //     }
    // }

    // int second_max = -1;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] != max_value)
    //     {
    //         second_max = max(second_max, arr[i]);
    //     }
    // }

    // return second_max;

    // 4. write a program to find the sum of all elements of the array.
    // int sum = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     sum += arr[i];
    // }
    // return sum;

    // 5. write a program to find the average of all elements of the array.

    // int sum = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     sum += arr[i];
    // }

    // return sum / arr.size();

    // 6. write a program to find the number of even and odd elements in the array.

    // int even = 0;
    // int odd = 0;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] % 2 == 0)
    //     {
    //         even++;
    //     }
    //     else
    //     {
    //         odd++;
    //     }
    // }

    // return {even, odd};

    // 7. array rotation one time

    int temp = arr[arr.size() - 1];
    for (int i = arr.size() - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    return arr;
}