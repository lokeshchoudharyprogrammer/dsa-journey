function subsetSums(arr, N) {
    let sumSubset = [];

    function func(ind, sum, arr, N, sumSubset) {
        if (ind === N) {
            sumSubset.push(sum);
            return;
        }

        func(ind + 1, sum + arr[ind], arr, N, sumSubset);

        func(ind + 1, sum, arr, N, sumSubset);
    }

    func(0, 0, arr, N, sumSubset);
    sumSubset.sort((a, b) => a - b);
    return sumSubset;
}


let arr = [3, 1, 2];
let N = arr.length;
console.log(subsetSums(arr, N)); 