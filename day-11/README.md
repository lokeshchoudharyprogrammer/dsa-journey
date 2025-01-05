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
