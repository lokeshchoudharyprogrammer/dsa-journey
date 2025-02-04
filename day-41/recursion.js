

const nthstair=(n)=>{
    if(n==0){
      return 1;
    }
    if(n!=0 && n<=3){
      return n
    }
    
   return  nthstair(n-1)+nthstair(n-1)
  }
  
  
  console.log(nthstair(44))




const print_array=(arr,k)=>{
  
    if(k==arr.length){
      return
    }
    console.log(arr[k]);
    k++;
    print_array(arr,k)
  }
  
  print_array([2,3,5,6,5,7,33,6],0)





const print_array1=(arr,k,n)=>{
  
    if(k==n){
      return
    }
    print_array(arr,k+1,n)
    console.log(arr[k]);
    k++;
  }
  
  print_array1([2,3,5,6,5,7,33,6],0,8)




const print_array3=(arr,n)=>{
  
    if(n<0){
      return
    }
    console.log(arr[n]);
    
    print_array(arr,n-1)
    // k++;
  }
  
  print_array3([2,3,5,6,5,7,33,6],7)