/**
 * @param {string[]} words
 * @return {string[]}
 */
var findWords = function(words) {
    let first = "qwertyuiop";
    let second = "asdfghjkl";
    let third = "zxcvbnm";

    const findWordInRow = (arr) => {
        let result = [];


        for (let k = 0; k < arr.length; k++) {
            let word = arr[k].toLowerCase(); 
            if (
            word.split("").every((char) => first.includes(char)) ||
            word.split("").every((char) => second.includes(char)) ||
            word.split("").every((char) => third.includes(char))
            ) {
            result.push(arr[k]);
            }
        }

         return result;
    };

    return findWordInRow(words)

};



/**
 * @param {string} paragraph
 * @param {string[]} banned
 * @return {string}
 */
var mostCommonWord = function(paragraph, banned) {
      
    let arr = paragraph
    .replace(/[^\w\s]|_/g, " ")  
    .toLowerCase()
    .split(/\s+/)               
    .filter(Boolean);          

    let obj = {};

    for (let word of arr) {
        if (!banned.includes(word)) {
            obj[word] = (obj[word] || 0) + 1;
        }
    }

    let maxCount = Math.max(...Object.values(obj));
   
    let value = "";
    for (let word in obj) {
        if (obj[word] === maxCount) {
            value += word;  
        }
    }

    return (value)

};


/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var nextGreaterElement = function(nums1, nums2) {
    const findNext=(num,nums2)=>{
  let indexValue=nums2.indexOf(num)
  
for(let k=indexValue;k<nums2.length;k++){
  if(nums2[k]>num){
   return (nums2[k])
   
  }
  
 }
 return -1
}


let result=[]
for(let k=0;k<nums1.length;k++){
  

result.push(findNext(nums1[k],nums2))
}
return (result)

};