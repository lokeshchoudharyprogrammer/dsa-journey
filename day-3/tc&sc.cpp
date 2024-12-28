#include    <iostream>
using namespace std;

/**
 * @brief      Main function
 *
 * @details    This is the main function from which execution begins.
 *             It prints "Hello World" to the console.
 */
int main() {

    cout << "Time Complexity & Space Complexity";
}


/**
 *  * **Definitions**
 * 
 * **Time Complexity (TC):**
 * Time Complexity is the measure of the time taken by an algorithm to run as a function of the length of the input.
 * It evaluates how the runtime of an algorithm increases as the size of the input increases.
 * 
 * Common TC terms:
 * 1. **O(1)** - Constant time.
 * 2. **O(log n)** - Logarithmic time.
 * 3. **O(n)** - Linear time.
 * 4. **O(n log n)** - Linearithmic time.
 * 5. **O(n^2)** - Quadratic time.
 * 6. **O(2^n)** - Exponential time.
 * 
 * Example: An algorithm that checks every element of an array has a time complexity of O(n).
 * 
 * **Space Complexity (SC):**
 * Space Complexity is the measure of the memory required by an algorithm to execute as a function of the length of the input.
 * It considers the additional space needed for variables, data structures, recursion stack, etc., in addition to the input size.
 * 
 * Categories of SC:
 * 1. **Input Space:** Space required to store the input data.
 * 2. **Auxiliary Space:** Additional space used during the execution of the algorithm.
 * 
 * 
 * Time Complexity (TC):
 * 
 * 1. Big O Notation:
 *    - Represents the **worst-case scenario** of an algorithm.
 *    - Focuses on the term that grows the fastest with input size.
 *    - Rules:
 *      a. Ignore constants.
 *      b. Ignore lower-order terms.
 *      c. Focus on dominant terms.
 * 
 * 2. Omega Notation:
 *    - Represents the **best-case scenario** of an algorithm.
 *    - Helps identify the minimum time an algorithm takes.
 * 
 * 3. Theta Notation:
 *    - Represents the **average-case scenario** or when the upper and lower bounds are the same.
 * 
 * Space Complexity (SC):
 * 
 * 1. Represents the **memory space** used by an algorithm.
 * 2. Includes:
 *    a. Space for variables (constant space: O(1)).
 *    b. Space for input data structures.
 *    c. Auxiliary space for recursive calls or additional memory used.
 * 
 * 
 */


/**
 * **Time Complexity and Space Complexity Overview**
 * 
 * Time Complexity (TC) helps measure how an algorithm's runtime grows with input size.
 * Space Complexity (SC) measures the memory used by the algorithm.
 * 
 * Common Time Complexities:
 * 
 * 1. **Constant Time (O(1))**:
 *    - The runtime does not depend on the size of the input.
 *    - Example:
 *      ```cpp
 *      int getElement(int arr[], int index) {
 *          return arr[index]; // O(1)
 *      }
 *      ```
 * 
 * 2. **Logarithmic Time (O(log n))**:
 *    - The input size is halved in each iteration or step.
 *    - Common in divide-and-conquer algorithms like Binary Search.
 *    - Example:
 *      ```cpp
 *      int binarySearch(const vector<int>& arr, int target) {
 *          int low = 0, high = arr.size() - 1; // O(1)
 *          while (low <= high) { // O(log n)
 *              int mid = low + (high - low) / 2; // O(1)
 *              if (arr[mid] == target) return mid; // O(1)
 *              else if (arr[mid] < target) low = mid + 1; // O(1)
 *              else high = mid - 1; // O(1)
 *          }
 *          return -1; // O(1)
 *      }
 *      ```
 * 
 * 3. **Linear Time (O(n))**:
 *    - The algorithm processes every element of the input once.
 *    - Example:
 *      ```cpp
 *      int findMax(const vector<int>& arr) {
 *          int maxVal = arr[0]; // O(1)
 *          for (int i = 1; i < arr.size(); i++) { // O(n)
 *              if (arr[i] > maxVal) maxVal = arr[i]; // O(1)
 *          }
 *          return maxVal; // O(1)
 *      }
 *      ```
 * 
 * 4. **Linearithmic Time (O(n log n))**:
 *    - Found in sorting algorithms that divide the input, solve subproblems, and combine results.
 *    - Example:
 *      ```cpp
 *      void mergeSort(vector<int>& arr, int low, int high) {
 *          if (low >= high) return; // Base case: O(1)
 *          int mid = low + (high - low) / 2; // O(1)
 *          mergeSort(arr, low, mid); // O(n/2)
 *          mergeSort(arr, mid + 1, high); // O(n/2)
 *          merge(arr, low, mid, high); // O(n) - Merge step
 *      }
 *      ```
 * 
 * 5. **Quadratic Time (O(n^2))**:
 *    - Algorithms with nested loops where all pairs of elements are compared or processed.
 *    - Example:
 *      ```cpp
 *      void bubbleSort(vector<int>& arr) {
 *          for (int i = 0; i < arr.size(); i++) { // O(n)
 *              for (int j = 0; j < arr.size() - i - 1; j++) { // O(n)
 *                  if (arr[j] > arr[j + 1]) {
 *                      swap(arr[j], arr[j + 1]); // O(1)
 *                  }
 *              }
 *          }
 *      }
 *      ```
 * 
 * 6. **Exponential Time (O(2^n))**:
 *    - Occurs when all possible subsets or combinations are explored.
 *    - Example:
 *      ```cpp
 *      int fibonacci(int n) {
 *          if (n <= 1) return n; // O(1)
 *          return fibonacci(n - 1) + fibonacci(n - 2); // O(2^n)
 *      }
 *      ```
 * 
 * **Space Complexity**
 * 
 * Space Complexity is categorized into:
 * 
 * 1. **Auxiliary Space**: Additional memory used during the algorithm.
 *    - Example: Temporary arrays, recursion stacks.
 * 
 * 2. **Input Space**: Memory required to store the input data.
 *    - Example: An array of size \( n \) takes \( O(n) \) space.
 * 
 * Examples:
 * 
 * 1. **Binary Search**:
 *    - Space Complexity: \( O(1) \) for iterative, \( O(log n) \) for recursive.
 * 
 * 2. **Bubble Sort**:
 *    - Space Complexity: \( O(1) \) (in-place sorting).
 * 
 * 3. **Merge Sort**:
 *    - Space Complexity: \( O(n) \) (due to temporary arrays).
 * 
 * 4. **Recursive Fibonacci**:
 *    - Space Complexity: \( O(n) \) (due to recursion stack).
 * 
 * **Conclusion**
 * 
 * Understanding time and space complexities helps design efficient algorithms.
 * Analyze the structure (loops, recursion) to determine the complexities.
 * The time complexities from worst to best case are: **O(N!) > O(N³) > O(N²) > O(N log N) > O(N) > O(log N) > O(1)**.
 */
