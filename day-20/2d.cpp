#include <iostream>
#include <vector>


void print2DWave( int arr[4][4], int n, int m) {
    for (int i = 0; i < n; i++) {

        if(i%2==0){
            for (int j = 0; j < m; j++) {
                std::cout << arr[j][i] << " ";
            }
        }
        else{
            for (int j = m-1; j >= 0; j--) {
                std::cout << arr[j][i] << " ";
            }
        }
    }


}

void print2DSpiral(int arr[4][4], int n, int m) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            std::cout << arr[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            std::cout << arr[i][right] << " ";
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                std::cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                std::cout << arr[i][left] << " ";
            }
            left++;
        }

}
}

void transpose2DArray(int arr[4][4], int n, int m) {
    
    // solve in o(n) time complexity
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < m; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }


    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //     arr[j][i]=arr[i][j];
    //     }
    //     }

        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
        }

}

int main(){

    // std::vector<int> vec = {1, 2, 3, 4, 5};
    // std::cout << vec.size() << std::endl;
    int arr[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};

    // print2DWave(arr, 4, 4);
    // std::cout << std::endl;
    // print2DSpiral(arr, 4, 4);

    transpose2DArray(arr, 4, 4);

    return 0;
}