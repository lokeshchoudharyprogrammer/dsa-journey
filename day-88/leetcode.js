
// Smallest Even Multiple


/**
 * @param {number} n
 * @return {number}
 */
var smallestEvenMultiple = function(n) {
    if(n%2==0){
        return n
    }else{
        return n*2
    }
};




// Find Greatest Common Divisor of Array
 

/**
 * @param {number[]} nums
 * @return {number}
 */
var findGCD = function(nums) {
    let max=Math.max(...nums)
    let min=Math.min(...nums)

   for(;min!==0;){       
       [max, min] = [min, max % min];
    }
    return max
};



// A Number After a Double Reversal


/**
 * @param {number} num
 * @return {boolean}
 */
var isSameAfterReversals = function(num) {

    
    
    let a=num

    
    let res=a.toString().split("").reverse();


    let arr=[]



    let zeroFlag = false;
    for (let i = 0; i < res.length; i++) {
    if (res[i] !== '0') {
        zeroFlag = true;
    }

    if (zeroFlag) {
        arr.push(res[i]);
    }
    }

    let res1=(arr);
    let res2=res1.reverse().join("");



    if(res2==a){
    return  (true)
    }else{
    return  ( false)
    
    }

};