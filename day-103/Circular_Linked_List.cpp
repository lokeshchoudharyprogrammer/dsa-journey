const check_address=(arr,curr)=>{
    
    for(let k=0;k<arr.length;k++){
        if(arr[k]==curr){
            return 1;
        }
    };
    return 0;
    
}

class Solution {
    // Function to check if the linked list has a loop.
    detectLoop(head) {
        // your code here
        
        let arr=[]
      
        let curr=head;
        
        
        while(curr!=null){
            if(check_address(arr,curr)){
                return 1;
            }
            arr.push(curr);
            curr=curr.next;
        }
        
        return 0;
    
        
        
    }
}



/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
 var hasCycle = function(head) {

    if (!head || !head.next) {
        return false;
    }
    
    let curr = head;
    let next_pointer = head.next;
    
    while (curr !== next_pointer) {
        if (!next_pointer || !next_pointer.next) {
            return false;
        }
        curr = curr.next;
        next_pointer = next_pointer.next.next;
    }
    
    return true;
};