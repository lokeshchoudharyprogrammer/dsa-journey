#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Zero Sum Subarrays
       
    int arr[]={6,-1,-34,-2,2,4,6-12,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == 0) {
            count++;
        }
        for (int j = i + 1; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                count++;
            }
        }
    }
    cout << count << endl;

}