const check_address=(map1,curr)=>{
    
    // for(let k=0;k<arr.length;k++){
        if(map1.has(curr)){
            return 1;
        }
    // };
    return 0;
    
}

class Solution {
    // Function to check if the linked list has a loop.
    detectLoop(head) {
        // your code here
        
       const map1 = new Map();
      
        let curr=head;
        
        
        while(curr!=null){
            if(check_address(map1,curr)){
                return 1;
            }
            // arr.push(curr);
            map1.set(curr);
            
            curr=curr.next;
        }
        
        return 0;
    
        
        
    }
}


const find_last_element=(map,next_element)=>{
    if(map.has(next_element)){
        return true;
    }
}


class Solution {
    // Function to remove a loop in the linked list.
    removeLoop(head) {
        // your code here
        let map = new Map();
        
        let curr=head;
        
        while(curr){
            map.set(curr);
            if(find_last_element(map,curr.next)){
                return curr.next=null
            }
            curr=curr.next;
        };
 
        
    }
}


class Solution {
    // Function to find the length of a loop in the linked list.
    countNodesinLoop(head) {
        // your code here
        
        let slow=head;
        let fast=head;
        while(fast!=null && fast.next!=null){
            
            fast=fast.next.next;
            slow=slow.next;
            if(fast==slow){
                break;
            }
            
        };
        
        if(fast==null || fast.next==null){
            return 0;
        }
        
        let meet=slow;
        
        slow=slow.next;
        let count=0;
        while(slow!=meet){
            count+=1;
            slow=slow.next;
        }
        return count+1;

        
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
 * @return {ListNode}
 */

 const check_repeart_node=(map,curr)=>{
    if(map.has(curr)){
        return true
    }
}

var detectCycle = function(head) {
    
    let curr=head;
    let map=new Map();

    while(curr){
        if(check_repeart_node(map,curr)){
            return curr;
        }
        map.set(curr)
        curr=curr.next;
    };

    return null


};