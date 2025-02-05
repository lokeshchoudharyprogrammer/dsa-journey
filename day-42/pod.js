/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */

var areAlmostEqual = function(s1, s2) {
    

    let letters = [] 
    for(let i =0 ;i<s1.length; i++){
        if(s1[i] != s2[i]){
            letters.push([s1[i],s2[i]])
            if(letters.length === 2){
                if(letters[0][0] === letters[1][1] && letters[0][1] === letters[1][0]) continue
                else return false
            }
            if(letters.length>2) return false
        }
    }
    return letters.length === 1 ? false: true
   
};