/**
 * @param {number[]} nums
 * @return {boolean}
 */
var isPossibleToSplit = function(nums) {
    

    let obj = {};

   
    for (let k = 0; k < nums.length; k++) {

        if (obj[nums[k]] == null) {
            obj[nums[k]] = 1;
        } else {
            obj[nums[k]]++;
        }

  
        if (obj[nums[k]] > 2) {
            return false;
        }
    }

    return true

};