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
 * @return {boolean}
 */
var isSymmetric = function(root) {

    if(!root) return true;

    let q = [[root.left, root.right]]

    while(q.length >= 1){
        [right, left] = q.pop()

        if(!left && !right){
            continue;
        } else if (!left || !right ){
            return false;
        }else if (right.val !== left.val){
            return false;
        }

        q.unshift([left.left, right.right]);

        q.unshift([left.right, right.left]);
    }

    return true;
};