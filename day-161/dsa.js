/**
 * @param {string} word
 * @return {number}
 */
var numberOfSpecialChars = function(word) {
        


    let lower=[];
    let upper=[]

    for(let k=0;k<word.length;k++){
    
        if(word[k]>='A' && word[k]<='Z'){
            upper.push(word[k])
        }else{
            lower.push(word[k])
        }
    }

    let res=new Set();

    for(let k=0;k<lower.length;k++){
        
        if(upper.includes(lower[k].toUpperCase())){
            res.add(lower[k])
        }
    
    };

    return (res.size)
};