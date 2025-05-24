/**
 * @param {string[]} words
 * @param {character} x
 * @return {number[]}
 */
var findWordsContaining = function(words, x) {
    let res=[]

    for(let k=0;k<words.length;k++){
        if(words[k].includes(x)){
            res.push(k)
        }
    }


    return (res)
};