/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function(candidates, target) {
    const ans = [];
    
    function findCombinations(ind, arr, target, ds) {

        if (ind === arr.length) {
            if (target === 0) {
                ans.push([...ds]);  
            }
            return;
        }

        if (arr[ind] <= target) {
            ds.push(arr[ind]);  
            findCombinations(ind, arr, target - arr[ind], ds);  
            ds.pop();  
        }

        findCombinations(ind + 1, arr, target, ds);
    }

    findCombinations(0, candidates, target, []);
    
    return ans;
};