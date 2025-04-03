// Remove every k'th node
// RRotate List
// isPalindrome
class Solution {
    public:
      Node* deleteK(Node* head, int k) {
          
          Node *curr=head, *pre=NULL;
          
          if(k==1){
              return NULL;
          }
          
          int count=1;
          
          while(curr){
              if(count==k){
                  pre->next=curr->next;
                  delete curr;
                  curr=pre->next;
                  count=1;
                  
              }else{
                  pre=curr;
                  curr=curr->next;
                  count++;
                  
              }
          }
          return head;
      }
  };
  

  /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
           
            if (!head || !head->next || k == 0) {
                return head;
            }
    
            ListNode *temp = head;
            int count = 0;
    
           
            while (temp) {
                count++;
                temp = temp->next;
            }
    
          
            k = k % count;
            if (k == 0) {
                return head;
            }
    
           
            ListNode *pre = nullptr;
            ListNode *curr = head;
            int steps = count - k;
    
            while (steps--) {
                pre = curr;
                curr = curr->next;
            }
    
           pre->next=NULL;
    
           
           ListNode *tail=curr;
    
           while(tail->next!=NULL){
            tail=tail->next;
           }
    
           tail->next=head;
    
           return curr;
    
            
    
        }
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
 * @return {boolean}
 */
var isPalindrome = function(head) {
    let fast = head, slow = head,reverse = null,prev, mid;
    while(fast != null && fast.next != null){
        fast = fast.next.next;
        prev = slow;
        slow = slow.next;
        prev.next = reverse;
        reverse = prev;
    }
    mid = prev;
    if(fast != null){
        slow = slow.next;
    }
    while(slow != null){
        if(slow.val != mid.val){
            return false;
        }
        slow = slow.next;
        mid = mid.next;
    }
    return true;
};




