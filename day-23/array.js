/**
 * @param {number[]} nums
 * @return {number}
 */
var maxFrequencyElements = function (nums) {
    let obj = {};
    for (let k = 0; k < nums.length; k++) {
        obj[nums[k]] == null ? obj[nums[k]] = 1 : obj[nums[k]]++
    }
    let max = -1, cout = 0, a = [];
    for (let k in obj) {

        if (max < obj[k]) {
            max = obj[k]

        }
    }

    for (let k in obj) {
        if (max == obj[k]) {
            a.push(+k)
        }
    }

    let count = 0;
    for (let k = 0; k < nums.length; k++) {

        for (let j = 0; j < a.length; j++) {
            if (nums[k] == a[j]) {
                count++
            }
        }
    }

    return count;


};


var majorityElement = function (nums) {
    let a = nums;
    let obj = {}

    for (let k = 0; k < a.length; k++) {
        obj[a[k]] == undefined ? obj[a[k]] = 1 : obj[a[k]]++

    }


    let max = -1;

    for (let k in obj) {


        if (obj[k] > a.length / 2) {
            max = k
        }

    }

    return +max
};


const missingAndRepeating = (arr) => {
    let re = [];
    let arr = [1, 3, 3];
    let obj = {};

    for (let k = 0; k < arr.length; k++) {
        obj[arr[k]] == null ? obj[arr[k]] = 1 : obj[arr[k]]++;
    }

    for (let k in obj) {
        if (obj[k] == 2) {
            re.push(+k); 
        }
    }

    let s = new Set(arr);
    let a1 = [...s].sort((a, b) => a - b);

    let missingNumber = 1;
    for (let num of a1) {
        if (num === missingNumber) {
            missingNumber++;
        } else if (num > missingNumber) {
            break;
        }
    }

    re.push(missingNumber);

    console.log(re); 
}