/**
 * @param {string} s
 * @return {boolean}
 */
var areOccurrencesEqual = function(s) {
    
    let obj={};


    for(let k=0;k<s.length;k++){
    obj[s[k]]==null?obj[s[k]]=1:obj[s[k]]++
    }

    let re=[]
    for(let k in obj){
    re.push(obj[k])
    }

    let unique=[...new Set(re)];

    return unique.length==1?true:false
};


/**
 * @param {number[]} nums
 * @param {number} original
 * @return {number}
 */
var findFinalValue = function(nums, original) {
    while (nums.includes(original)) {
        original *= 2;
    };
    
    return (original);
};




