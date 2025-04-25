/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {number[]} nums
 * @param {ListNode} head
 * @return {ListNode}
 */
var modifiedList = function(nums, head) {
    
    let curr=head;
    let map=new Set(nums);
    let return_nodes=new ListNode(0);
    let dummy=return_nodes;

    while(curr!=null){

        if(!map.has(curr.val)){
            dummy.next=new ListNode(curr.val)
            dummy = dummy.next;
        }
        curr=curr.next
    }

    return return_nodes.next


};