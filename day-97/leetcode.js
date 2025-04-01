/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
        
    let obj = {};

    for (let word of strs) {

        let arr = word.split("").sort().join("");
    
        if (!obj[arr]) {
            obj[arr] = [];
        }
        
        obj[arr].push(word);
    }

    

    return (Object.values(obj).reverse());

};