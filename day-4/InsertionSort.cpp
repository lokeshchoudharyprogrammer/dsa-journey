#include <iostream>
using namespace std;


void InsertionSort(int arr[],int n){

    cout << "Unsorted array is: " << endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=1;i<n;i++){

        for(int j=i;j>0;j--){

            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    cout << "Sorted array is: " << endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main() {
    cout << "Sorting Algorithms: INSERTION SORT  tc=O(n^2) sc=O(1)" << endl;


    int arr[6] = {12, 11, 13, 5, 6, 7};
    int n = 6;

    InsertionSort(arr,n);

}