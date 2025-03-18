/**
 * @param {string[]} words1
 * @param {string[]} words2
 * @return {number}
 */
var countWords = function (words1, words2) {



    let obj = {}

    for (let k = 0; k < words1.length; k++) {

        obj[words1[k]] == null ? obj[words1[k]] = 1 : obj[words1[k]]++
    };
    let obj2 = {}

    for (let k = 0; k < words2.length; k++) {

        obj2[words2[k]] == null ? obj2[words2[k]] = 1 : obj2[words2[k]]++
    };

    let w = []
    for (let j in obj) {
        if (obj[j] == 1) {
            w.push(j)
        }
    }

    let w2 = []
    for (let j in obj2) {
        if (obj2[j] == 1) {
            w2.push(j)
        }
    }

    const clearObject = (obj) => {
        for (let key in obj) {
            delete obj[key];
        }
    };

    clearObject(obj)
    clearObject(obj2)

    for (let k = 0; k < w.length; k++) {

        obj[w[k]] == null ? obj[w[k]] = 1 : obj[w[k]]++
    };


    for (let k = 0; k < w2.length; k++) {

        obj[w2[k]] == null ? obj[w2[k]] = 1 : obj[w2[k]]++
    };

    let res = 0
    for (let k in obj) {
        if (obj[k] > 1) {
            res++
        }
    }



    return (res)
};