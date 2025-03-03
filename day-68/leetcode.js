/**
 * @param {number[]} nums
 * @param {number} pivot
 * @return {number[]}
 */
var pivotArray = function(nums, pivot) {
    

    let less=[];
    let eq=[];
    let gre=[];

    for(let k of nums){

        if(k<pivot){
            less.push(k)
        }else if(k==pivot){
            eq.push(k)
        }else{
            gre.push(k)
        }
    }

    return [...less,...eq,...gre]
};