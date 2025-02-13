

const fect=(n)=>{
    if(n==0){
      return 1;
    }
    return n*fect(n-1)
  }
  
  
  // console.log(fect(3))
  
  
  
  const sumOfNumber=(n)=>{
    if(n==0){
      return 0;
    }
    
    return n+sumOfNumber(n-1);
  }
  
  // console.log(sumOfNumber(5))
  
  
  const power=(n,p)=>{
    if(p==0){
      return 1;
    }
    
    return n*power(n,p-1)
  }
  
  // console.log(power(3,3))
  
  
  const reverseStr=(str,index)=>{
    if(index<0){
      return;
    }
    console.log(str[index])
    reverseStr(str,index-1)
    
  }
  
  
  // reverseStr("abc",2)
  
  
  const palindrome=(str,start,end)=>{
    
    if(start>=end){
      return true;
    }
    
    if(str[start]!=str[end]){
      return false;
    }
    
   return palindrome(str,start+1,end-1)
    
  }
  
  // console.log(palindrome("mom",0,2))
  
  const print_array=(array,start,end)=>{
    
    if(start>end){
      return;
    }
    
    console.log(array[start]);
    print_array(array,start+1,end)
    
  };
  
  // print_array([1,2,3,4,5],0,4)
  
  
  
  const sum_of_array = (array, end) => {
    if (end == 0) {
      return 0;
    }
    return sum_of_array(array, end - 1) + array[end - 1];
  };
  
  console.log(sum_of_array([1, 2, 3, 4, 5], 5)); 
  
  
  
  
  
  
  