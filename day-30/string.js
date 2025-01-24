
var addStrings = function(num1, num2) {
    let carry = 0;

    let firstP = num1.length - 1;
    let secondP = num2.length - 1;
    let res = '';

    while (firstP >= 0 || secondP >= 0) {
        let sum = 0;
        let first = firstP >= 0 ? Number(num1[firstP--]) : 0
        let second = secondP >= 0 ? Number(num2[secondP--]) : 0

        sum += first + second + carry;
        carry = 0;

        if (sum > 9) {
            sum %= 10;
            carry++;
        }
        res = sum + res;
    };

    if (carry > 0) {
        res = carry + res;
    }

    return res;
};


// cpp code
function isVowel(c) {
    return /[aeiouAEIOU]/.test(c);
}

function sortVowels(s) {
    const count = {};

    for (let c of s) {
        if (isVowel(c)) {
            count[c] = (count[c] || 0) + 1;
        }
    }

    const sortedVowel = "AEIOUaeiou";
    let ans = "";
    let j = 0;

    for (let i = 0; i < s.length; i++) {
        if (!isVowel(s[i])) {
            ans += s[i];
        } else {
            while (count[sortedVowel[j]] === 0) {
                j++;
            }

            ans += sortedVowel[j];
            count[sortedVowel[j]]--;
        }
    }

    return ans;
}

console.log(sortVowels("leetcode"));