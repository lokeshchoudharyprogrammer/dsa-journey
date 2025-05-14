/**
 * @param {string[]} words
 * @param {number} k
 * @return {string[]}
 */
var topKFrequent = function(words, k) {
   
    let obj = {};

   
    for (let k of words) {
        if (obj[k] == null) {
            obj[k] = 1;
        } else {
            obj[k]++;
        }
    }

   
    return Object.keys(obj).sort((a, b) => {
        if (obj[b] === obj[a]) {
            return a.localeCompare(b); 
        }
        return obj[b] - obj[a]; 
    }).slice(0,k);

  

};

/**
 * @param {string} order
 * @param {string} s
 * @return {string}
 */
var customSortString = function(order, s) {

    let res=""
    for (let i = 0; i < order.length; i++) {
        for (let j = 0; j < s.length; j++) {
            if (s[j] === order[i]) {
                res += s[j];
            }
        }
     }


    for (let j = 0; j < s.length; j++) {
        if (!order.includes(s[j])) {
            res += s[j];
        }
    }
    return res
    
};

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(nums, k) {
    
    let obj={};

    for(let k=0;k<nums.length;k++){

        if(obj[nums[k]]==null){
            obj[nums[k]]=1;
        }else{
            obj[nums[k]]++
        }
    
    }

    return Object.keys(obj)
        .sort((a, b) => obj[b] - obj[a]) 
        .slice(0, k)
        .map(Number);
};

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {boolean}
 */
var search = function(nums, target) {

    return nums.sort((a,v)=>a-v).includes(target)
    
};