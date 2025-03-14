/**
 * @param {number[][]} matrix
 * @param {number} k
 * @return {number}
 */
var kthSmallest = function(matrix, k) {
 
    return matrix.flat().sort((a,s) => a - s)[k - 1];

};