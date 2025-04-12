// Merge k Sorted Lists



/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode[]} lists
 * @return {ListNode}
 */

const merge = (head1, head2) => {
    let dummy = new ListNode(0);
    let tail = dummy;

    while (head1 && head2) {
        if (head1.val <= head2.val) {
            tail.next = head1;
            head1 = head1.next;
        } else {
            tail.next = head2;
            head2 = head2.next;
        }
        tail = tail.next;
    }

    if (head1) tail.next = head1;
    if (head2) tail.next = head2;

    return dummy.next;
}

var mergeKLists = function(lists) {

   if (lists.length === 0) return null;

    let head = lists[0];

    for (let k = 1; k < lists.length; k++) {
        head = merge(head, lists[k]);
    }

    return head;
    
  
};




/**
 * @param {number[][]} image
 * @return {number[][]}
 */
var flipAndInvertImage = function(image) {
   
    let res=[]

    for(let k=0;k<image.length;k++){
    res.push(image[k].reverse().map((res)=>res==0?1:0))
    }

    return res
};