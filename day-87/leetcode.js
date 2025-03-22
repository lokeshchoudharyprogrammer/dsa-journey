/**
 * @param {string} s
 * @return {number}
 */
var countSegments = function(s) {

    let res=s.trim()
    if(res.length==0)
    {
     return 0
    }

    let count=0
    s.split(" ").map((res)=>{
    if(res.length!=0){
        count++
    }
    })

    return count;


};