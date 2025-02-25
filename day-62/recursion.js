let findelementinarray = (arr, x, index, n) => {
    if (index == n) {
      return 0;
    }
    if (arr[index] == x) {
      return 1;
    }
    return findelementinarray(arr, x, index + 1, n); 
  };
  
  let arr = [1, 5, 7, 9, 4];
  let n = arr.length;
  let index = 0;
  let x = 1;
  console.log(findelementinarray(arr, x, index, n)); 
  

//   Solved pod leetcode , and gfg question 