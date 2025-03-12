/**
 * @param {number[]} nums
 * @return {number}
 */

var maximumCount = function(nums) {
    
    let nav=0
    let pos=0
    
    
    for(let k=0;k<nums.length;k++){
      if(nums[k]<0){
        nav++
      }
      else if(nums[k]>0){
        pos++
      }
    }
    
    return (Math.max(nav,pos))
    };