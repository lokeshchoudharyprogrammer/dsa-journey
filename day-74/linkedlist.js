class Solution {
    getKthFromLast(head, k) {
   
        
    let currentHeadOne = head;
    let secondHead = head;

    for (let i = 0; i < k; i++) {
        if (currentHeadOne === null) {
            return -1; 
        }
        currentHeadOne = currentHeadOne.next;
    }

    while (currentHeadOne !== null) {
        currentHeadOne = currentHeadOne.next;
        secondHead = secondHead.next;
    }

    return secondHead ? secondHead.data : -1;
        
        
    }
}