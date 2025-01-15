#include <iostream>
#include <vector>
#include <string>

using namespace std;


// ✅ Rotate by 90 degrees (2D array)
void rotate_90(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
    }


// ✅ Rotate Matrix Element Clockwise (2D array)
void rotate_clockwise(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

// ✅ Rotate Matrix 180 degrees (2D array)
void rotate_180(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
}


int main() {
   vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // Input 2D matrix
   rotate_90(matrix); // Rotate the matrix by 90 degrees clockwise
   for (int i = 0; i < matrix.size(); i++) {
       for (int j = 0; j < matrix[i].size(); j++) {
           cout << matrix[i][j] << " ";
       }
       cout << endl;
   }
   rotate_clockwise(matrix); // Rotate the matrix by 90 degrees clockwise
   for (int i = 0; i < matrix.size(); i++) {
       for (int j = 0; j < matrix[i].size(); j++) {
           cout << matrix[i][j] << " ";
       }
       cout << endl;
   }
   rotate_180(matrix); // Rotate the matrix by 90 degrees clockwise
   for (int i = 0; i < matrix.size(); i++) {
       for (int j = 0; j < matrix[i].size(); j++) {
           cout << matrix[i][j] << " ";
       }
       cout << endl;
   }
   return 0;
   
}