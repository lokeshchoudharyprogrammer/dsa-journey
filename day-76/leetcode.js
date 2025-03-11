/**
 * @param {string} s
 * @return {number}
 */
var numberOfSubstrings = function(s) {
    const obj = { a: 0, b: 0, c: 0 };
    let result = 0, left = 0;

    for (let right = 0; right < s.length; right++) {
        obj[s[right]]++;

        while (obj['a'] > 0 && obj['b'] > 0 && obj['c'] > 0) {
            result += s.length - right;
            obj[s[left]]--;
            left++;
        }
    }

    return result;
};