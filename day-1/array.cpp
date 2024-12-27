#include <iostream>
using namespace std;
#include <climits>

int main()
{

    //  array => its a collection of similar data type elements stored in contiguous memory locations

    //  *** print array elements ***
    // int arr[5] = {1, 2, 3, 4, 5};

    // for(int a=0;a<5;a++){
    //     cout << arr[a] << endl;
    // }

    //  *** print minimum element of array ***

    // int min = INT_MAX;

    // int arr[7] = {3,4,2,88,6,0,6};

    // for(int a=0;a<7;a++){

    //     if(arr[a]<min){
    //         min=arr[a];
    //     }

    // }

    // cout << "Minimum element of array is: " << min << endl;

    //  *** print maximum element of array ***

    int max = INT_MIN;

    int arr[7] = {3, 4, 2, 88, 6, 0, 6};

    for (int a = 0; a < 7; a++)
    {

        if (arr[a] > max)
        {
            max = arr[a];
        }
    }
    cout << "Maximum element of array is: " << max << endl;
}