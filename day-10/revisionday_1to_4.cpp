#include <iostream>
using namespace std;


int FindXInArray(int arr[], int n, int x){

    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            index=i;
        }
    }
    return index;

}

int ReverseArray(int arr[], int n){
    int start=0;
    int end=n-1;
    while (start<=end){

        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;

    }
    cout << "Reversed array is : ";
    for(int i=0;i<n;i++){
       cout << arr[i]<<" "; ;  
    }
    

}

int SecondLargestElement(int arr[], int n){
    int max = -1;
    int secondMax = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secondMax=max;
            max=arr[i];
        }
        else if(arr[i]>secondMax && arr[i]!=max){
            secondMax=arr[i];
        }
    }
    return secondMax;
}

int sumofArray(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

void selectionSort(int arr[], int n){
    
    for(int a=0;a<n;a++){
        int index=a;
        for(int b=a+1;b<n;b++){
            if(arr[b]<arr[index]){
                index=b;
            }
        }
        swap(arr[index],arr[a]);
    }
    cout << "Sorted array is: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}

void bubbleSort(int arr[],int n){

    for(int a=0;a<n;a++){
        
        for(int c=0;c<n-1-a;c++){
            if(arr[c]>arr[c+1]){
                swap(arr[c],arr[c+1]);
            }
        }
    }
    cout << "Sorted array is: " ;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";


    }
    
}

void InsertionSort(int arr[],int n){
    for(int a=1;a<n;a++){
        int key=arr[a];
        int b=a-1;
        while(b>=0 && arr[b]>key){
            arr[b+1]=arr[b];
            b--;
        }
        arr[b+1]=key;
    }
    cout << "Sorted array is: " ;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    cout << "Hello World Revision day 1 to 4" << endl;

    // 1st topic is array
    // 2nd solve array problems 
    // 3rd selection sort
    // 4th bubble sort
    // 5th insertion sort

    // 1. write a program to find x in the array if it is present in the array return its index else return -1.
    int arr[]={2, 4, 5, 6, 7, 4, 8};
    int x=5;
    int n=7;
    int result = FindXInArray(arr, n, x);
    cout << "Index of x is:  " << result << endl;


    // 2. Write a program to reverse an array of integers.
    int arr1[6] = {2, 4, 5, 6, 7, 4};
    int n1=6;
    ReverseArray(arr1, n1);

    // 3. write a program to find second largest element in the array.
    int arr2[]={2, 4, 5, 6, 7, 4, 8};
    int n2=7;
    int result2 = SecondLargestElement(arr2, n2);
    cout << "Second largest element is:  " << result2 << endl;


    // 4. write a program to find the sum of all elements of the array.
    int arr3[]={2, 4, 5, 6, 7, 4, 8};
    int n3=7;
    int result3 = sumofArray(arr3, n3);
    cout << "Sum of all elements is:  " << result3 << endl;


    // 3nd topic is selection sort

    int arr4[]={64, 34, 25, 12, 22, 11, 90};
    int n4=7;
    selectionSort(arr4, n4);

    // 4th topic is bubble sort
    int arr5[]={64, 34, 25, 12, 22, 11, 90};
    int n5=7;
    bubbleSort(arr5, n5);

    // 5th topic is insertion sort
    // Compare this snippet from day-4/InsertionSort.cpp:
    int arr6[]={64, 34, 25, 12, 22, 11, 90};
    int n6=7;
    InsertionSort(arr6, n6);

    
    

}