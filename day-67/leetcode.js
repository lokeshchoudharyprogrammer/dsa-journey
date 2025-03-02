/**
 * @param {number[][]} nums1
 * @param {number[][]} nums2
 * @return {number[][]}
 */
var mergeArrays = function(nums1, nums2) {
    let m = nums1.length, n = nums2.length;
    let i = 0, j = 0;
    let result = [];
  
    while (i < m && j < n) {
      if (nums1[i][0] === nums2[j][0]) {
        result.push([nums1[i][0], nums1[i][1] + nums2[j][1]]);
        i++;
        j++;
      } else if (nums1[i][0] < nums2[j][0]) {
        result.push(nums1[i]);
        i++;
      } else {
        result.push(nums2[j]);
        j++;
      }
    }
    
    while (i < m) {
      result.push(nums1[i]);
      i++;
    }
    
    while (j < n) {
      result.push(nums2[j]);
      j++;
    }
    
    return result;
  };
  