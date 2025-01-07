#include<iostream>
// #include<vector>
// #include<algorithm>
using namespace std;


// bool divide(vector<int>arr){
//     int maxi=INT_MAX,prefix=0;
// int total_sum=0;

//     for(int a=0;a<arr.size();a++){
//         maxi+=arr[a];
//     }

//     for(int i=0;i<arr.size();i++){
//         prefix+=arr[i];
//         int right=total_sum-prefix;
//         if(prefix==right){
//             return 1;

//         }
//     }
//     return 0;

// }

int main() {

    // int n;
    // cout <<"enter the size of array :";
    // cin>>n;

    // vector<int>v(n);
    // cout << "enter array elements :";
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    // }

    // cout<<divide(v); 


    // prefix;

    int arr[]={2,3,1,5,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    // arr[0]=arr[0];
    // for(int a=1;a<n;a++){

    //     int sum=arr[a-1]+arr[a];
    //     arr[a]=sum;

    // }

    // cout <<"array after modification"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

// suffix
            arr[n-1]=arr[n-1];

            for(int a = n - 2; a >= 0; a--) { 
                    arr[a] = arr[a] + arr[a + 1]; 
            }


            cout <<"array after modification"<<endl;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
   





}