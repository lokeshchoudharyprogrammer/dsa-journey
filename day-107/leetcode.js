/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var swapNodes = function(head, k) {
    
    let curr=head;

    let first=head;
    let last=head;

    for(let l=0;l<k-1;l++){
        first=first.next
    }

    let count=0;
    
    while(curr){

        curr=curr.next;
        count++;

    }
    
    curr=head;

    for(let l=0;l<count-k;l++){
        last=last.next
    }

    // i have first,last ;

    let temp=first.val;
    first.val=last.val;
    last.val=temp;

    return curr

};



/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {number} a
 * @param {number} b
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeInBetween = function(list1, a, b, list2) {
    let dummy = new ListNode(0, list1);
    let prevA = dummy;

    // Step 1: Find node before a
    for (let i = 0; i < a; i++) {
        prevA = prevA.next;
    }

    // Step 2: Find node at b
    let afterB = prevA;
    for (let i = a; i <= b; i++) {
        afterB = afterB.next;
    }

    // Step 3: Connect prevA.next to list2
    prevA.next = list2;

    // Step 4: Go to end of list2
    let tail = list2;
    while (tail.next !== null) {
        tail = tail.next;
    }

    // Step 5: Connect end of list2 to afterB.next
    tail.next = afterB.next;

    return dummy.next;
};



/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var insertionSortList = function(head) {
    
    if(!head.next){
        return head
    }

    let arr=[];

    let curr=head;
    while(curr){
        arr.push(curr.val)
        curr=curr.next;
    }

    let res = arr.sort((a,v)=>a-v);
    
    let res_node=new ListNode(res[0]);

    let n=res_node;

    if(res.length)

    for(let k=1;k<res.length;k++){
        n.next=new ListNode(res[k])
        n=n.next
    }

    return res_node;

};


/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} left
 * @param {number} right
 * @return {ListNode}
 */
var reverseBetween = function(head, left, right) {

    if(!head.next){
        return head
    }

    let arr=[];

    let curr=head;
    while(curr){
        arr.push(curr.val)
        curr=curr.next;
    }

    let res = arr.slice(0, left - 1)
    .concat(arr.slice(left - 1, right).reverse())
    .concat(arr.slice(right));

    let res_node=new ListNode(res[0]);

    let n=res_node;

    if(res.length)

    for(let k=1;k<res.length;k++){
        n.next=new ListNode(res[k])
        n=n.next
    }

    return res_node;

};


/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} x
 * @return {ListNode}
 */
var partition = function(head, x) {
    
    let arr=[];
    let curr=head;
    while(curr){
        arr.push(curr.val)
        curr=curr.next;
    }

    let less=[];
    let greater=[];

    for(let k=0;k<arr.length;k++){
        if(arr[k]<x){
            less.push(arr[k])
        }else{
            greater.push(arr[k])
        }
    }

    const res=[...less,...greater];

    let return_node=new ListNode(0);

    let n=return_node;

    for(let k=0;k<res.length;k++){
        n.next=new ListNode(res[k]);
        n=n.next;
    }

    return return_node.next;




};


/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var swapPairs = function(head) {
    
   

    if(!head){
        return null
    }

    let curr=head;

    if(!curr.next){
        return head
    }
     
    let n=new ListNode();
    // 0 = 2 ;
    // 2 = 3;
    // 2
    n=head.next;
    head.next=swapPairs(head.next.next)
    n.next=head


    return n;

};