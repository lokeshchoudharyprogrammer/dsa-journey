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
 var isBalanced = function(root) {
    
    let isBal = true

    var maxDepth = function (node) {
        if (!node) return 0
        let leftSub = maxDepth(node.left)
        let rightSub = maxDepth(node.right)
        if (Math.abs(leftSub - rightSub) > 1) {
            isBal = false
        }
       
        return Math.max(leftSub, rightSub) + 1
    }

    maxDepth(root)
    
    return isBal
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
 * @param {number} val
 * @return {TreeNode}
 */
 var searchBST = function(root, val) {
    let cur=root
    
    while(cur){
        if(cur.val==val) return cur
        else if(cur.val>val) cur=cur.left
        else cur=cur.right
    }
    return null
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
 * @return {number}
 */
 var maxDepth = function(root) {

    if(root==null) return 0;
    let left=maxDepth(root.left);
    let right=maxDepth(root.right);

    return Math.max(left,right)+1

};

/**
 * @param {number[]} arr
 * @return {boolean}
 */

 const odd=(num)=>{
    if(num%2!=0){
        return true
    }
    
}

var threeConsecutiveOdds = function(arr) {
    
    let count=0;

    for(let k=0;k<arr.length;k++){

        
       if(odd(arr[k])){
        
            count++

            if (count === 3) {
                    
                    break;
                }
            }
            else{
                count=0;
            }
    }

    return count==3?true:false

};