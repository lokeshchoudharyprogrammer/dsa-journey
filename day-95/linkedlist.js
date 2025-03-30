/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(list1, list2) {
    
    let arr=[];
    
    let temp=list1;
    let temp2=list2;

    while(temp){
        arr.push(temp.val)
        temp=temp.next
    };

    while(temp2){
        arr.push(temp2.val)
        temp2=temp2.next
    };

    arr.sort((a,v)=>a-v)

    if (arr.length === 0) return null;

    let mergedHead = new ListNode(arr[0]);
    let current = mergedHead;

    for (let i = 1; i < arr.length; i++) {
        current.next = new ListNode(arr[i]);
        current = current.next;
    }

    return mergedHead;

};