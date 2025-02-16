function printSubsetsWithSumAndCount(index,  currentSum, targetSum, arr, n) {
    if (index === n) {
        if (currentSum === targetSum) return 1
        
        return 0;
    }

    currentSum += arr[index];
    
    let l=printSubsetsWithSumAndPrintOneOnly(index + 1,  currentSum, targetSum, arr, n)

    currentSum -= arr[index];

    let r=printSubsetsWithSumAndPrintOneOnly(index + 1, currentSum, targetSum, arr, n)
    
    return l+r;
    
}

function main() {
    const arr = [1, 2, 1]; 
    const targetSum = 2;  
    const n = arr.length; 
   
    const currentSum = 0;  
    
    console.log(printSubsetsWithSumAndCount(0, currentSum, targetSum, arr, n));
}

main();

function printSubsetsWithSumAndPrintOneOnly(index, currentSubset, currentSum, targetSum, arr, n) {
    if (index === n) {
        if (currentSum === targetSum) {
            console.log(currentSubset.join(" "));
            return true
        }
        return false;
    }

    currentSubset.push(arr[index]);
    currentSum += arr[index];
   if(printSubsetsWithSumAndPrintOneOnly(index + 1, currentSubset, currentSum, targetSum, arr, n)==true){
     return true
   };

    currentSubset.pop();
    currentSum -= arr[index];

    if(printSubsetsWithSumAndPrintOneOnly(index + 1, currentSubset, currentSum, targetSum, arr, n)==true){
      return true;
    };
}

function main1() {
    const arr = [1, 2, 1]; 
    const targetSum = 2;  
    const n = arr.length; 
    const currentSubset = []; 
    const currentSum = 0;  
    
    printSubsetsWithSumAndPrintOneOnly(0, currentSubset, currentSum, targetSum, arr, n);
}

main1();



function printSubsetsWithSum(index, currentSubset, currentSum, targetSum, arr, n) {
    if (index === n) {
        if (currentSum === targetSum) {
            console.log(currentSubset.join(" "));
        }
        return;
    }

    currentSubset.push(arr[index]);
    currentSum += arr[index];
    printSubsetsWithSum(index + 1, currentSubset, currentSum, targetSum, arr, n);

    currentSum -= arr[index];
    currentSubset.pop();

    printSubsetsWithSum(index + 1, currentSubset, currentSum, targetSum, arr, n);
}

function main2() {
    const arr = [1, 2, 1]; 
    const targetSum = 2;  
    const n = arr.length; 
    const currentSubset = []; 
    const currentSum = 0;  
    
    printSubsetsWithSum(0, currentSubset, currentSum, targetSum, arr, n);
}

main2();