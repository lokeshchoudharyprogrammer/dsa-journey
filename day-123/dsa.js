// https://www.geeksforgeeks.org/user/lokeshchoudharyprogrammer/ [283]
https://leetcode.com/u/lokeshchoudharydev/ [262]


/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
    if (height.length === 0) return 0;

    let n = height.length;
    let leftMax = new Array(n);
    let rightMax = new Array(n);
    let waterTrapped = 0;

   
    leftMax[0] = height[0];
    for (let i = 1; i < n; i++) {
        leftMax[i] = Math.max(leftMax[i - 1], height[i]);
    }

  
    rightMax[n - 1] = height[n - 1];
    for (let i = n - 2; i >= 0; i--) {
        rightMax[i] = Math.max(rightMax[i + 1], height[i]);
    }

   
    for (let i = 0; i < n; i++) {
        waterTrapped += Math.min(leftMax[i], rightMax[i]) - height[i];
    }

    return waterTrapped;
};