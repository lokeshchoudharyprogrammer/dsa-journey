/**
 * @param {number[]} arr
 * @return {number}
 */
var sumSubarrayMins = function(arr) {
    
    const n = arr.length;
    const stack = [];
    const prevSmaller = Array(n).fill(-1);
    const nextSmaller = Array(n).fill(n);
    const MOD = 1e9 + 7;

    // Find Previous Less Element (PLE)
    for (let i = 0; i < n; i++) {
        while (stack.length && arr[stack[stack.length - 1]] > arr[i]) {
            stack.pop();
        }
        if (stack.length) {
            prevSmaller[i] = stack[stack.length - 1];
        }
        stack.push(i);
    }


    stack.length = 0; // clear the stack

    // Find Next Less Element (NLE)
    for (let i = n - 1; i >= 0; i--) {
        while (stack.length && arr[stack[stack.length - 1]] >= arr[i]) {
            stack.pop();
        }
        if (stack.length) {
            nextSmaller[i] = stack[stack.length - 1];
        }
        stack.push(i);
    }


    let result = 0;

    for (let i = 0; i < n; i++) {
        const left = i - prevSmaller[i];
        const right = nextSmaller[i] - i;
        result = (result + arr[i] * left * right) % MOD;
    }

    return result;

};