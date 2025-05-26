/**
 * @param {number[]} arr1
 * @param {number[]} arr2
 * @return {number[]}
 */
var relativeSortArray = function(arr1, arr2) {
    
    let res = [];

    for(let k = 0; k < arr2.length; k++) {
        let count = arr1.filter((num) => num == arr2[k]).length;
        let repeated = Array(count).fill(arr2[k]);  
        res.push(...repeated);
    }

   
    let remaining = arr1.filter(num => !arr2.includes(num));
    remaining.sort((a, b) => a - b);
    res.push(...remaining);


    return res

};