
// 832. Flipping an Image
// Merge sort doc
function flipAndInvertImage(nums) {
    
    for (let i = 0; i < nums.length; i++) {
        nums[i] = nums[i].reverse();
    }

  
    for (let i = 0; i < nums.length; i++) {
        for (let j = 0; j < nums[i].length; j++) {
            nums[i][j] = nums[i][j] === 0 ? 1 : 0;
        }
    }

    return nums;
}


let nums = [[1, 1, 0], [1, 0, 1], [0, 0, 0]];
 flipAndInvertImage(nums);
console.log(flipAndInvertImage(nums)); 