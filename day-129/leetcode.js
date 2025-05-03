/**
 * @param {string[][]} responses
 * @return {string}
 */
var findCommonResponse = function(responses) {
            
    let obj={}

    for(let k=0;k<responses.length;k++){

        let arr= [...new Set(responses[k])]
    
        for (var i = 0; i <arr.length; i++) {
            obj[arr[i]]==null?obj[arr[i]]=1:obj[arr[i]]++
        }
    
    
    }


    let max=-1;

    for(let k in obj){
        if(obj[k]>max){
            max=obj[k]
        }
    }

    let res=[]

    for(let k in obj){
        if(obj[k]==max){
        res.push(k)
        }
    }




    return (res.sort()[0])
};



/**
 * @param {number} n
 * @return {number[]}
 */
var lexicalOrder = function(n) {
    
    let arr=[];

    for(let k=1;k<=n;k++){
        arr.push(k)
    }
    
    arr.sort((a, b) => a.toString().localeCompare(b.toString()));

    return arr;

};