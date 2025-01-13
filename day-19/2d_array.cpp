#include <iostream>
using namespace std;

void PrintArray(int arr[3][4])
{
    // column wise printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

// void PrintArray(int arr[3][4])
// {
//     // row wise printing
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

void FindElement(int arr[3][4])
{
    // row wise printing
    bool flag = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if(arr[i][j]==5){
                flag = true;
                break;
                
           }
        }
        cout << endl;
    }

    if (flag)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    

}

void AddTwoArray(int arr1[3][4], int arr2[3][4])
{
    int arr3[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    PrintArray(arr3);
}


void printRowMax(int arr[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        int max = arr[i][0];
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        cout << max << endl;
    }
}

void sumofTheDiagonal(int arr[3][4])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << sum << endl;
}
void sumofTheSecondDiagonal(int arr[4][4])
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i + j == 3)
            {
                sum += arr[i][j];
            }
        }
    }    
    cout << sum << endl;
}

int main()
{
    int arr[3][4] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    PrintArray(arr);
    FindElement(arr);
    AddTwoArray(arr, arr);
    printRowMax(arr);
    int arr2[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    sumofTheSecondDiagonal(arr2);
    return 0;
}