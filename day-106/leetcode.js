var reverseKGroup = function(head, k) {
    if (!head || k === 1) return head;

   
   let nodes = [];
   let temp = head;
   while (temp) {
       nodes.push(temp);
       temp = temp.next;
   }

  
   for (let i = 0; i + k <= nodes.length; i += k) {
       let left = i, right = i + k - 1;
       while (left < right) {
           [nodes[left], nodes[right]] = [nodes[right], nodes[left]];
           left++;
           right--;
       }
   }

  
   for (let i = 0; i < nodes.length - 1; i++) {
       nodes[i].next = nodes[i + 1];
   }
   nodes[nodes.length - 1].next = null;

  
   return nodes[0];
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

const reverse=(curr,pre)=>{

    if(curr==null){
        return pre;
    }

    let move=curr.next;
    curr.next=pre;

    return reverse(move,curr)

}

var reverseList = function(head) {
   
   let curr=head;

    return reverse(curr,null)

};



/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    
    let temp1=l1
    let temp2=l2;
    let sum1=[],sum2=[];

    while(temp1){
        sum1.push(temp1.val)
        temp1=temp1.next;
        
    }
    while(temp2){
        sum2.push(temp2.val)
        temp2=temp2.next;

    }

    let num1 = BigInt(sum1.reverse().join(''));
    let num2 = BigInt(sum2.reverse().join(''));
    let totalSum = (num1 + num2).toString();
   
    let re_sum_node = new ListNode(0);
    let current = re_sum_node;

    for (let i = totalSum.length - 1; i >= 0; i--) {
        current.next = new ListNode(Number(totalSum[i]));
        current = current.next;
    }

    return re_sum_node.next;
};