//  online platform like gfg use for pattern printing

// *******
//  *****
//   ***
//    *

// 1,2,3,4,5,6,7
// 1,3,5,7

const Print_Patterns = () => {
    let n = 7
    for (let k = 0; k <=n; k++) {
        let str = ""
        
        for (let j = 0; j < k; j++) {
            str += " ";
        }  
        
        for (let j = 0; j < n - 2 * k; j++) {
            str += "*";
        }
       
        
        console.log(str)
    }
}
 
// Print_Patterns()




