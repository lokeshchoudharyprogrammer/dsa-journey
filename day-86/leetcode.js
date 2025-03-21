/**
 * @param {number[]} num
 * @param {number} k
 * @return {number[]}
 */

const addToArrayForm = (num, k) => (BigInt(num.join('')) + BigInt(k)).toString().split('').map(Number);