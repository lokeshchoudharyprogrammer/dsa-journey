

const pow=(a,b)=>{
    if(b==0){
      return 1;
    }
    
    return a*pow(a,b-1)
    
  }
  
  console.log(pow(2,4))
  
  
  const gcp=(a,b)=>{
    if(a==0){
      return b;
    }
    
    return gcp(b%a,a);
    
  }
  
  console.log(gcp(36,60))
  
  const dectobin=(n)=>{
    if(n==0){
      return "";
    }
    
    return dectobin(Math.floor(n / 2)) + (n % 2);
  // console.log(n%2)
    
  }
  
  
  console.log(dectobin(17))