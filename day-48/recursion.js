function printArray(index,arr){
    if (index == arr.length){
    	return;
    }
    
    console.log(arr[index]);
     printArray(index+1,arr)
}


function printArray(N,arr){
    if (N==arr.length){
    	return;
    }
    console.log(arr[N]);
    printArray(N+1,arr);
}


function printReverseArray(N,arr){
    if (N < 0){
    	return;
    }
    console.log(arr[N])
    printReverseArray(N-1,arr);
}


function evenArray(n, arr){
    if (n==arr.length){
    	return;
    }
    
    if(arr[n]%2==0){
        console.log(arr[n])
    }
    evenArray(n+1, arr)
    

}

function oddArray(n, arr){
    if (n == arr.length){
    	return;
    }
    if(arr[n]%2!=0){
        console.log(arr[n])
    }
    oddArray(n+1,arr)
    
}

function printChar(N,str) {
    if(N==str.length){
        return 
    };
    console.log(str[N]);
    printChar(N+1,str)

}


function printCharReverse(N,str) {
    if (N<0){
    	return;
    }
    console.log(str[N]);
    printCharReverse(N-1,str);
}
