const searchInRotatedSortedArray = (arr, start, end, key) => {
  if (start > end) {
      return -1;
  }

  let mid = Math.floor(start + (end - start) / 2);

  if (arr[mid] === key) {
      return mid;
  }


  if (arr[start] <= arr[mid]) {
      if (key >= arr[start] && key < arr[mid]) {
          return searchInRotatedSortedArray(arr, start, mid - 1, key);
      } else {
          return searchInRotatedSortedArray(arr, mid + 1, end, key);
      }
  }


  if (key > arr[mid] && key <= arr[end]) {
      return searchInRotatedSortedArray(arr, mid + 1, end, key);
  } else {
      return searchInRotatedSortedArray(arr, start, mid - 1, key);
  }
};


const binarySearch=(arr,start,end,x)=>{
  if(start>end){
    return -1
  }
  
  let mid=start+end-start/2;
  if(arr[mid]==x){
    return mid
  }
  if(arr[mid]<x){
    return binarySearch(arr,mid+1,end,x)
  }else{
    return binarySearch(arr,start,mid-1,x)
    
  }
}

let arr=[5, 6, 7, 8, 9, 10, 1, 2, 3], key = 3
console.log(binarySearch(arr,0,arr.length,key))