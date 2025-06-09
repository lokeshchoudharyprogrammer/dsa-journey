/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function (nums1, nums2) {

    let arr = [...nums1, ...nums2].sort((a, b) => a - b);

    let n = arr.length;

    let median;

    if (n % 2 !== 0) {
        median = arr[Math.floor(n / 2)];
    } else {
        let mid1 = arr[n / 2];
        let mid2 = arr[n / 2 - 1];
        median = (mid1 + mid2) / 2;
    }

    return median;



};