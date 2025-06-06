/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {

    let str = "";

    for (let k = 0; k < s.length; k++) {

        let char = s[k].toLowerCase();

        if ((char >= 'a' && char <= 'z') || (char >= '0' && char <= '9')) {
            str += char;
        }

    }

    let start = 0;

    let end = str.length - 1;

    for (; start < end;) {

        if (str[start] != str[end]) {
            return false;
        } else {
            start++;
            end--;
        }

    }
    return true

};