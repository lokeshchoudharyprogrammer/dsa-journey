/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {

    
    const obj = {};
  
    for (let k of s) {
      obj[k] = (obj[k] || 0) + 1;
    }
  
    let res = "";
  
    
    for (let k of t) {
      if (obj[k]) {
        obj[k]--;
      } else {
        res += k;
      }
    }
  
    return res;
  
  };