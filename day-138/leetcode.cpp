/**
 * @param {number[][]} edges
 * @return {number}
 */
 var findCenter = function(edges) {
    
    if (edges[0][0] === edges[1][0] || edges[0][0] === edges[1][1]) {
        return edges[0][0];
    }
    return edges[0][1];
};


/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
 var zigzagLevelOrder = function(root) {
    
    if (root == null) return [];

    let queue = [root];
    let levelNumber = 1;
    let return_array = [];

    while (queue.length) {
        const levelSize = queue.length;
        let level = [];

        for (let i = 0; i < levelSize; i++) {
            const node = queue.shift();
            level.push(node.val);

            if (node.left) queue.push(node.left);
            if (node.right) queue.push(node.right);
        }

        if (levelNumber % 2 === 0) {
            level.reverse();
        }

        return_array.push(level);
        levelNumber++;
    }

    return return_array;

};