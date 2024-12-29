#include <iostream>
using namespace std;

void BubbleSort(int arr[],int n) {

    cout << "Unsorted array is: " << endl;
    bool swapped;
    for (int i = 0; i < n; i++) {

        for(int j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){

                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
               swap(arr[j],arr[j+1]);
               swapped=true;



            }
        }
        if(!swapped)
            break;

        
    }

    cout << "Sorted array is: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


}


int main() {
    cout << "Sorting Algorithms: BUBBLE SORT  tc=O(n^2) sc=O(1)" << endl;
    int arr[6] = {12, 11, 13, 5, 6, 7};
    int n = 6;
    BubbleSort(arr, n);
}