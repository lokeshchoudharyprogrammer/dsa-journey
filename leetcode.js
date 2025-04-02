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
var mergeKLists = function(lists) {
    
    let sort_linked_list = [];

   for (let list of lists) {
       while (list !== null) {
           sort_linked_list.push(list.val);
           list = list.next;
       }
   };

   if(sort_linked_list.length==0) return null;

   sort_linked_list.sort((a,b)=>a-b)

   let head=new ListNode(sort_linked_list[0]);
   let temp=head;

  for(let k=1;k<sort_linked_list.length;k++){
       temp.next=new ListNode(sort_linked_list[k])
       temp=temp.next;
  }
  return head
 

};


/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumTripletValue = function(nums) {
    
    let max = 0;

    // Triple nested loop to check all combinations of k, j, and z
    for (let k = 0; k < nums.length; k++) {
        for (let j = k+1; j < nums.length; j++) {
            for (let z = j+1; z < nums.length; z++) {
                // Calculate the value for this triplet
                let max_value = (nums[k] - nums[j]) * nums[z];

                // Update max if we found a larger value
                max = Math.max(max, max_value);
            }
        }
    }

    return max>=0?max:-1;
};