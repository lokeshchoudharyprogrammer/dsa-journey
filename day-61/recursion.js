

const sum=(arr,index)=>{
  
    if(index<0){
      return 0;
    }
    
   return arr[index]+sum(arr,index-1);
  }
  
  console.log(sum([1,2,3,4,5],4))
  
  
  
  
  const min=(arr,index)=>{
    
    if(index==arr.length-1){
      return arr[index];
    }
    
   return Math.min(arr[index],min(arr,index+1));
  }
  
  console.log(min([1,2,3,4,5],0))
  
  const max=(arr,index)=>{
    
    if(index==arr.length-1){
      return arr[index];
    }
    
   return Math.max(arr[index],max(arr,index+1));
  }
  
  console.log(max([1,2,3,4,5],0))