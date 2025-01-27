var intToRoman = function (num) {
    let s = num
    let word = "";
    const Roman = {
        M: 1000,
        CM: 900,
        D: 500,
        CD: 400,
        C: 100,
        XC: 90,
        L: 50,
        XL: 40,
        X: 10,
        IX: 9,
        V: 5,
        IV: 4,
        I: 1
    };

    let a;
    if (s < 1 || s > 3999) {
        return "Number out of range (1-3999)";
    } else {
        for (let key in Roman) {
            while (s >= Roman[key]) {
                word += key;
                s -= Roman[key];
            }
        }
    }

    return word;
};


var romanToInt = function (s) {
    let table = {
        I: 1,
        V: 5,
        X: 10,
        L: 50,
        C: 100,
        D: 500,
        M: 1000
    }

    let result = 0;
    for (let i = 0; i < s.length; i++) {
        //if the next roman numeral is larger, then we know we have to subtract this number
        if (table[s[i]] < table[s[i + 1]]) {
            result -= table[s[i]]
        }
        //otherwise, add like normal. 
        else {
            result += table[s[i]]
        }
    }
    return result
};


function factorial(N) {


    let result = BigInt(1); // Or BigInt 1

    for (var i = 2; i <= N; i++){
        // result = result * i         
        result *= BigInt(i);
    }

    return result;
}


// Driver method
let N = 20;
console.log(factorial(N));