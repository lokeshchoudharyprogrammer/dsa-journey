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
var deleteDuplicates = function(head) {
    
    if(!head){
        return null
    }

    let obj={};
    let curr=head;

    while(curr){
       
        if(obj[curr.val]==null){
            obj[curr.val]=1
        }else{
            obj[curr.val]++
        }
        curr=curr.next;
    }

   

    

    let unique = [];

    for (let k in obj) {
        if (obj[k] === 1) {
            unique.push(Number(k)); 
        }
    }


    unique.sort((a, b) => a - b)
    
    if(unique.length==0){
        return null
    }
    

    let index = 0;

   
    let newHead = new ListNode(unique[index++]);
    let node = newHead;
    
    while (index < unique.length) {
        node.next = new ListNode(unique[index++]);
        node = node.next;
    }

    return newHead;

};




/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function(headA, headB) {
    
    // store the head's in temp value for iteration

    let x=headA;
    let y=headB;

    // count the length of linkedlist;

    let count_x_node=0
    let count_y_node=0;

    while(x){
        count_x_node++;
        x=x.next;
    }

    while(y){
        count_y_node++;
        y=y.next;
    }

    // reset the node bcz we want same place node
    x=headA;
    y=headB;

    // set both to the same place means both in same index;
    while(count_x_node>count_y_node){
        count_x_node--;
        x=x.next;

    }

    while(count_x_node<count_y_node){
        count_y_node--;
        y=y.next;
    }

    // till the both not equle move ahead
    while (x !== y) {
        x = x.next;
        y = y.next;
    }

    // if both never meet then then return null 
    // means x== null means if the node is end of the end then return the null bcz there is no 
    //  intersction point 
    if(x==null){
            return null;
    }

    // if found the intersection point then return node 
    return x;


};