# Sorting Algorithms in JavaScript

## Selection Sort
In this algorithm, we select the smallest element and put it to the left (start of the array).

```javascript
let arr = [3, 7, 2, 1, 5, 9];

for (let k = 0; k < arr.length; k++) {
  let index = k;
  for (let a = k + 1; a < arr.length; a++) {
    if (arr[a] < arr[index]) {
      index = a;
    }
  }
  let temp = arr[index];
  arr[index] = arr[k];
  arr[k] = temp;
}

console.log(arr);
```

## Bubble Sort
In this algorithm, we select an element from the start. If the element has not reached the end, we continue comparing. If the element reaches the end, stop and start the same process for the next element (nth element). Repeat this process till the end of the nth element. 
We don’t touch the last element because the element has already reached the end, so the loop runs `n - outer_loop_start_variable - 1` times.

```javascript
let arr = [3, 7, 2, 1, 5, 9];

for (let k = 0; k < arr.length; k++) {
  for (let j = 0; j < arr.length - 1 - k; j++) {
    if (arr[j] > arr[j + 1]) {
      [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
    }
  }
}

console.log(arr);
```

## Insertion Sort
In this algorithm, if the element is not the smallest, it is moved to the left of the array. If the ahead element is smaller, stop. The inner condition goes like this: `0 -> 1`, `0 -> 2`, `0 -> 3`, ..., `0-> nth`. 
We select elements such that the inner condition continues until `< outer_loop_start_variable`.

```javascript
let arr = [3, 7, 2, 1, 5, 9];

for (let k = 1; k < arr.length; k++) {
  for (let j = 0; j < k; j++) {
    if (arr[j] > arr[j + 1]) {
      [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
    }
  }
}

console.log(arr);

```
# Binary Search in JavaScript

## Definition:
Binary Search is an efficient algorithm used to find an element in a sorted array or list. It works by repeatedly dividing the search interval in half. If the target value is equal to the middle element, the search ends. If the target is smaller than the middle element, the search continues in the left half, otherwise, it continues in the right half. This process continues until the target value is found or the search interval is empty.

## Time Complexity:
- **Best Case:** O(1) (When the element is found in the middle)
- **Worst Case:** O(log n) (The search interval is halved with each step)

## Steps of Binary Search:
1. Start with two pointers: one pointing to the first element (`low`) and the other pointing to the last element (`high`).
2. Find the middle element of the array.
3. If the middle element is the target, return its index.
4. If the target is smaller than the middle element, adjust the `high` pointer to `middle - 1` (search left half).
5. If the target is larger than the middle element, adjust the `low` pointer to `middle + 1` (search right half).
6. Repeat the steps until the target is found or the `low` pointer exceeds the `high` pointer.

---

## Binary Search Example Code in JavaScript:

### Code:

```javascript
// Binary Search Function
function binarySearch(arr, target) {
  let low = 0;
  let high = arr.length - 1;
  
  while (low <= high) {
    const mid = Math.floor((low + high) / 2); // Find the middle index
    const midValue = arr[mid];
    
    if (midValue === target) {
      return mid; // Target found, return index
    } else if (midValue < target) {
      low = mid + 1; // Search in the right half
    } else {
      high = mid - 1; // Search in the left half
    }
  }
  
  return -1; // Target not found
}

// Example Usage
const arr = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19];
const target = 7;

const result = binarySearch(arr, target);
if (result !== -1) {
  console.log(`Element found at index ${result}`);
} else {
  console.log("Element not found");
}


```
### Explanation:
1. The array is sorted, and the `binarySearch` function is called with the sorted array and the target value.
2. The `low` and `high` pointers track the search interval.
3. The `mid` index is calculated, and if the element at the middle index matches the target, the index is returned.
4. If the target is less than the middle value, the search continues on the left side of the array. If the target is greater, the search continues on the right side.
---

## Example Output:

Element found at index 3


---

## Advantages of Binary Search:
- **Efficiency:** With a time complexity of O(log n), it is much faster than linear search (O(n)) for large datasets.
- **Sorted Data:** It requires the data to be sorted. If the data isn't sorted, binary search won't work.

---

## Conclusion:
Binary search is a powerful algorithm for searching sorted arrays efficiently. It cuts down the number of elements to check with each step, making it much faster than linear search for large datasets.

