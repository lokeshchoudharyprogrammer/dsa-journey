/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} val
 * @return {ListNode}
 */
var removeElements = function (head, val) {
    const headnode = new ListNode(0);
    headnode.next = head;
    let current = headnode;


    while (current.next) {
        if (current.next.val === val) {

            current.next = current.next.next;
        } else {
            current = current.next;
        }
    }
    return headnode.next;
};


// quick sort

const partition = (arr, start, end) => {
    let pivot = arr[end];
    let position = start;

    for (let i = start; i < end; i++) {
        if (arr[i] <= pivot) {
            [arr[i], arr[position]] = [arr[position], arr[i]];
            position++;
        }
    }


    [arr[position], arr[end]] = [arr[end], arr[position]];
    return position;
};
