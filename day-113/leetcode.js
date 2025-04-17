/**
 * @param {string[]} word1
 * @param {string[]} word2
 * @return {boolean}
 */
var arrayStringsAreEqual = function(word1, word2) {
    return word1.join('') === word2.join('');
};


/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var countPairs = function(nums, k) {

    let count = 0;

    for(let i=0;i<nums.length;i++){

        for(let j=i+1;j<nums.length;j++){
            if(nums[i]===nums[j] && (i*j)%k===0){
                count++;
            }
        }
    }

    return count;
};


/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var reverseStr = function(s, k) {

    let arr = s.split('');
    let i = 0;

    while (i < arr.length) {
        
        let left = i;

        // left right
        //   0   => 1
        //   1   => 2
        //   2   => 3

        // take the last length of the right means by kth 
        // 0+2-1 =>1
        // 1+2-1 =>2
        // 2+2-1 =>3
        
        // why we take min bcz if we reach end that's why we keep this condition 
        // then left and right both can't replace 
        // end loop exit 
        let right = Math.min(i + k - 1, arr.length - 1);

        // Reverse first k characters
        while (left < right) {
            [arr[left], arr[right]] = [arr[right], arr[left]];
            left++;
            right--;
        }

        // Move both pointers forward by 2k
        i += 2 * k;
    }

    return arr.join('');
};



/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var reverseStr = function(s, k) {

    let arr = s.split('');
    let i = 0;

    while (i < arr.length) {
        
        let left = i;

        // left right
        //   0   => 1
        //   1   => 2
        //   2   => 3

        // take the last length of the right means by kth 
        // 0+2-1 =>1
        // 1+2-1 =>2
        // 2+2-1 =>3
        
        // why we take min bcz if we reach end that's why we keep this condition 
        // then left and right both can't replace 
        // end loop exit 
        let right = Math.min(i + k - 1, arr.length - 1);

        // Reverse first k characters
        while (left < right) {
            [arr[left], arr[right]] = [arr[right], arr[left]];
            left++;
            right--;
        }

        // Move both pointers forward by 2k
        i += 2 * k;
    }

    return arr.join('');
};

/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var reverseStr = function(s, k) {

    let arr = s.split('');
    let i = 0;

    while (i < arr.length) {
        
        let left = i;

        // left right
        //   0   => 1
        //   1   => 2
        //   2   => 3

        // take the last length of the right means by kth 
        // 0+2-1 =>1
        // 1+2-1 =>2
        // 2+2-1 =>3
        
        // why we take min bcz if we reach end that's why we keep this condition 
        // then left and right both can't replace 
        // end loop exit 
        let right = Math.min(i + k - 1, arr.length - 1);

        // Reverse first k characters
        while (left < right) {
            [arr[left], arr[right]] = [arr[right], arr[left]];
            left++;
            right--;
        }

        // Move both pointers forward by 2k
        i += 2 * k;
    }

    return arr.join('');
};


class Solution {
    // Function to insert a node at the beginning of the linked list.
    insertAtBeginning(head, x) {
        // Code here
        let node=new Node(x);
        
        node.next=head;
        head=node;
        
        return head
    }
}