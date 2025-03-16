/**
 * @param {string[]} words
 * @return {string[]}
 */
var commonChars = function (words) {

    let arr = []

    for (let k = 0; k < words.length; k++) {

        let obj = {}
        let bit = words[k].split("");

        for (let w of bit) {
            if (obj[w] == null) {
                obj[w] = 1
            } else {
                obj[w]++

            }

        }
        arr.push(obj)

    }

    let res = [];

    for (let word in arr[0]) {
        let min = Math.min(...arr.map(obj => obj[word] || 0));
        res.push(...Array(min).fill(word));
    }

    return (res);
};