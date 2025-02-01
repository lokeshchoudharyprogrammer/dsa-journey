console.log("Hello, World!");


const even=(n)=>{
  
  if(n%2==0){
    console.log(n)
  }
}

const re=(num,n)=>{
  if(num==n){
    return 
  }
  
  even(num)
  re(num+1,n)
  
}

re(1,20)






const recursion =(n,target)=>{
  
    if(n==target){
      return 0
    }
     
    console.log(n)
  
    recursion(n+1,target)
    
  }
  
  recursion(1,5)
  
  
  
  
  


let nums = [2,1];

const odd=(num)=>{
  if(num%2!=0){
    return true
  }else{
    return false
  }
}
const even=(num)=>{
  if(num%2==0){
    return true
  }else{
    return false
  }
}

let falg;

for(let k=0;k<nums.length-1;k++){
  if(odd(nums[k]) && even(nums[k+1])){
   falg= true
  }
  else if(even(nums[k]) && odd(nums[k+1])){
    falg= true
  }
  
  else{
    falg =false
    break;
    
  }
}

if(falg==true || nums.length==1){
  falg=true
  console.log(true)
}else{
  console.log(false)
}



