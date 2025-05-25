/**
 * @param {string[]} patterns
 * @param {string} word
 * @return {number}
 */
var numOfStrings = function(patterns, word) {
   
    let count=0;
    
    for(let k=0;k<patterns.length;k++){
        if(word.includes(patterns[k])){
            count++
        }
    }

    return count
};