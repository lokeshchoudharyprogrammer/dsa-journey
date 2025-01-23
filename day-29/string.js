/**
 * @param {string} s
 * @return {string}
 */
var sortSentence = function (s) {
    // let s = "is2 sentence4 This1 a3";


    let words = s.split(" ");

    words.sort((a, b) => {
        let numA = parseInt(a.match(/\d+/)[0]);
        let numB = parseInt(b.match(/\d+/)[0]);

        return numA - numB;
    });

    let sortedSentence = words.join(" ").replace(/\d+/g, "");

    return sortedSentence
};



var longestPalindrome = function (s) {



    let obj = {};

    for (let k of s) {
        if (obj[k] == null) {
            obj[k] = 1
        } else {
            obj[k]++
        }
    }

    // console.log(obj)

    let count = 0
    for (let k in obj) {
        if (obj[k] % 2 == 0) {
            count += obj[k]
        } else {
            count += obj[k] - 1;
        }
    }

    let odd = 0
    for (let k in obj) {
        if (obj[k] % 2 !== 0) {
            odd++
        }
    }

    if (odd >= 1) {
        count += 1
    }

    return count;
    // console.log(count)
};