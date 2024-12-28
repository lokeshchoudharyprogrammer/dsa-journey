#include <iostream>
using namespace std;

/**
 * @brief      Main function
 *
 * @details    This is the main function from which execution begins.
 *             It prints "Sorting Algorithms: SELECTION  SORT" to the console.
 */

int main() {
    cout << "Sorting Algorithms: SELECTION  SORT  tc=O(n^2) sc=O(1)" << endl;

    int arr[6] = {12, 11, 13, 5, 6, 7};
    int n = 6;
    for(int i=0;i<5;i++){

        int index=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }

    cout<<"Sorted array is: "<<endl;
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}

