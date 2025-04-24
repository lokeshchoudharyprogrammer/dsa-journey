


let s = 'A*(B+C)/D'
// Output: ABC+*D/

const pritory=(str)=>{
  if(str=="^"){
    return 3;
  }else if(str=="*" || str=="/"){
    return 2;
  }
  else if(str=="+" || str=="-"){
    return 1;
  }
  else{
    return -1;
  }
}


let i=0;
let ans=""
let stack=[];


while(s.length>i){
  
  if(
    (s[i]>="A" && s[i]<="Z") || 
    (s[i]>="a" && s[i]<="z") || 
    (s[i]>="0" && s[i]<="9")
  ){
    ans+=s[i]
  }else if(s[i]=="("){
    stack.push("(")
  }else if(s[i]==")"){
    while(stack.length>0 && stack[stack.length-1]!="("){
      ans+=stack[stack.length-1];
      stack.pop();
    }
    stack.pop()
  }else{
    
    while(stack.length>0 && pritory(s[i])<=pritory(stack[stack.length-1])){
      ans+=stack[stack.length-1];
      stack.pop()
    }
    
    stack.push(s[i])
  }
  i++
}

if(stack.length>0){
  ans+=stack.toString()
}

console.log(ans)

/**
 * @param {string} version1
 * @param {string} version2
 * @return {number}
 */
var compareVersion = function(version1, version2) {
    
    let arr1 = version1.split('.');
    let arr2 = version2.split('.');

    let maxLength = Math.max(arr1.length, arr2.length);

    for (let i = 0; i < maxLength; i++) {
        let num1 = +arr1[i] || 0;
        let num2 = +arr2[i] || 0;

        if (num1 < num2) return -1;
        if (num1 > num2) return 1;
    }

    return 0;


};


/**
 * @param {string} version1
 * @param {string} version2
 * @return {number}
 */
var compareVersion = function(version1, version2) {
    
    let arr1 = version1.split('.');
    let arr2 = version2.split('.');

    let maxLength = Math.max(arr1.length, arr2.length);

    for (let i = 0; i < maxLength; i++) {
        let num1 = +arr1[i] || 0;
        let num2 = +arr2[i] || 0;

        if (num1 < num2) return -1;
        if (num1 > num2) return 1;
    }

    return 0;


};