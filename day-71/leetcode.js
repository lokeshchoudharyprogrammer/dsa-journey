/**
 * @param {number[][]} grid
 * @return {number[]}
 */
var findMissingAndRepeatedValues = function(grid) {
    let arr=grid.flat().sort((a,v)=>a-v);


let obj={}
for(let k=0;k<arr.length;k++){
  if(obj[arr[k]]==undefined){
    obj[arr[k]]=1
  }else{
    obj[arr[k]]++
    
  }
}

let max = -Infinity;
let maxKey = null;

for (let k in obj) {
  if (obj[k] > max) {
    max = obj[k];
    maxKey = k;
  }
}




let miss=0
const set = new Set(arr); 
    for (let k = 1; k < arr.length + 1; k++) {
        if (!set.has(k)) {
            miss+=(k); 
        }
    }

return ([+maxKey,miss])

};