/**
 * @param {number[]} nums
 * @param {number[][]} queries
 * @return {number}
 */
var minZeroArray = function(nums, queries) {
    
    const N = nums.length;
    const diffArray = new Array(N + 1).fill(0);
    let sum = 0, count = 0;

    for (let index = 0; index < N; index++){
        while (sum + diffArray[index] < nums[index]) {
            count++;

            if (count > queries.length) {
                return -1;
            }

            let left = queries[count - 1][0], right = queries[count - 1][1], val = queries[count - 1][2];

            if (right >= index) {
                diffArray[Math.max(left, index)] += val;
                diffArray[right + 1] -= val;
            }
        }

        sum += diffArray[index];

    }

    return count;
};