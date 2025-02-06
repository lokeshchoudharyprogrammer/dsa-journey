// ****
// ****
// ****
// ****

const star_print_5ht_time = () => {
    for (let k = 1; k < 5; k++) {
        let k = ""
        for (let j = 1; j < 5; j++) {
            // j add 5 times star's     
            k += ("*")
        }
        // after then print all 5 * and after then inner loop exit 
        // and outer loop run till 4 bcz <=5 if =5 then it will go 
        // till 5 ok understand 😊
        console.log(k)
    }
}
// star_print_5ht_time();

// ****
// *  *
// *  *
// ****


const round_star_print = () => {
    for (let col = 0; col < 5; col++) {
        let str = ""
        for (let row = 0; row < 5; row++) {
            if (col == 0) {
                str += ("*")
            }
            else if (col == 4) {
                str += ("*")
            }
            else if (row == 0) {
                str += ("*")
            }
            else if (row == 4) {
                str += ("*")
            } else {
                str += " ";
            }
        }
        console.log(str)
    }
}
// round_star_print()


// ****
//   ****
//     ****
//       ****

const printStar3 = () => {
    for (let k = 0; k < 5; k++) {
        let str = "";
        for (let j = 0; j < k; j++) {
            str += " ";
        }
        for (let j = 0; j < 5; j++) {
            str += "*";
        }

        console.log(str)
    }
}
// printStar3()



// ****
// ****
// ****
// ****

const printStar4 = () => {
    for (let k = 0; k < 5; k++) {
        let str = "";
        for (let j = 5; j > k; j--) {
            str += " ";
        }
        for (let j = 0; j < 5; j++) {
            str += "*";
        }

        console.log(str)
    }
}
// printStar4()


// *
// **
// ***
// ****

const pattern5 = () => {
    for (let k = 0; k < 5; k++) {

        let str = ""
        for (let j = 0; j < k; j++) {
            str += ("*")
        }
        console.log(str)
    }

}
// pattern5()

//     *
//    ***
//   *****
//  *******

const star_print = () => {
    for (let k = 0; k < 5; k++) {

        let str = ""
        for (let l = 5; l > k; l--) {
            str += " "
        }
        for (let j = 0; j < k; j++) {
            str += "*";
        }
        for (let j = 1; j < k; j++) {
            str += "*";
        }
        console.log(str)
    }

}
// star_print()

//     *
//    * *
//   *   *
//  *******
const star_print2 = () => {
    const n = 4; 
    for (let i = 0; i < n - 1; i++) {
      let str = "";
      for (let j = 0; j < n - i - 1; j++) {
        str += " ";
      }
      str += "*";
  
      if (i > 0) {
        for (let j = 0; j < 2 * i-1; j++) {
          str += " ";
        }
        str += "*";
      }
      console.log(str);
    }  
    let bottom = "";
    for (let i = 0; i < 2 * n - 1; i++) {
      bottom += "*";
    }
    console.log(bottom);
  };
  
  star_print2();
  