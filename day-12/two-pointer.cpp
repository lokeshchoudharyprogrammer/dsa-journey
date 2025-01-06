#include <iostream>
using namespace std;


 twoSum(arr, target) {
        // code here
        let start=0;
        let end=arr.length-1;
        arr.sort((a,v)=>a-v);
        while(start<end){
            let sum=arr[start]+arr[end]
            if(sum==target){
                return true;

            }
            else if(sum>target){
                end--;
                
            }else{
                start++;
            }
        }
        return false;
    }


    findPair(arr, x) {
        // code here
    const numSet = new Set();

    for (let num of arr) {
        if (numSet.has(num - x) || numSet.has(num + x)) {
            return true;
        }
        numSet.add(num);
    }

    return false;
        
    }

int main() {
    cout << "Hello World!" << endl;

    int arr[]={1,0,0,1,0,1,1};
    int n=7;

    int i=0,j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            
            j--;
            

        }
        else{
            swap(arr[i],arr[j]);
            j--;
        }
    }
    
    for(int k=0;k<n;k++)
        cout<<arr[k]<<" ";
    
    return 0;



    
    
}