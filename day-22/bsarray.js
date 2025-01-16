var searchMatrix = function(matrix, target) {
    let arr = matrix;
    let m = matrix[0].length;
    
    for (let k = 0; k < matrix.length; k++) {
        if (arr[k][0] <= target && target <= arr[k][m - 1]) {
            let start = 0;
            let end = m - 1;

            while (start <= end) {
                let mid = start + Math.floor((end - start) / 2);

                if (arr[k][mid] == target) {
                    return true;
                } else if (arr[k][mid] < target) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
    }
    
    return false;
};

const lonnm=( matrix,target)=>{
    let arr = matrix;
    let n = matrix.length;
    let m = matrix[0].length;

    let start=0,end=n*m-1;

    while(start<=end){
        let mid = start + Math.floor((end - start) / 2);
        let row=Math.floor(mid/m);
        let col=  mid%m;
        if(arr[row][col]==target){
            return true;
        }
        else if(arr[row][col]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;   
}

function matSearch(mat, x) {
    // code here
    if (mat.length === 0 || mat[0].length === 0) {
        return false;
    }

    let m = mat[0].length; // Number of columns
    let n = mat.length;    // Number of rows

    let row = 0, col = m - 1; // Start from the top-right corner

    while (row < n && col >= 0) {
        if (mat[row][col] === x) {
            return true; // Found the target
        } else if (mat[row][col] < x) {
            row++; // Move down to the next row
        } else {
            col--; // Move left to the previous column
        }
    }

    return false; // Target not found
}

const main=()=>{
    let matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]];
    let target = 3;
    console.log(searchMatrix(matrix,target));
    console.log(lonnm(matrix,target));
    console.log(matSearch(matrix,target));
}

main();