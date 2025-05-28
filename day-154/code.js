// 59. Spiral Matrix II


/**
 * @param {number} n
 * @return {number[][]}
 */
var generateMatrix = function(n) {
  
    let row = 0, col = 0;
  
    let edges = { right: n - 1, bottom: n - 1, left: 0, top: 0 };
  
    const dirs = {
  
      right: () => {
        if (++col < edges.right) return dirs.right;
        edges.top++;
        return dirs.down;
      },
  
      down: () => {
        if (++row < edges.bottom) return dirs.down;
        edges.right--;
        return dirs.left;
      },
  
      left: () => {
        if (--col > edges.left) return dirs.left;
        edges.bottom--;
        return dirs.up;
      },
  
      up: () => {
        if (--row > edges.top) return dirs.up;
        edges.left++;
        return dirs.right;
      },
  
    };
    const matrix = [...new Array(n)].map(() => new Array(n));
  
    for (let nbr = 1, dir = dirs.right; nbr <= n * n; nbr++, dir = dir())
      matrix[row][col] = nbr;
      
    return matrix;
  };