// Delete in a Singly Linked List
// Delete in a Singly Linked List

class Solution {
    public:
      /* Function to delete a node from a linked list */
      Node* deleteNode(Node* head, int x) {
          // cdoe here
           if(x!=1){
             
              Node  *curr=head;
              Node  *pre=NULL;
              x--;
              while(x--){
                  pre=curr;
                  curr=curr->next;
                  
              }
              pre->next=curr->next;
              delete curr;
          }else{
              Node *temp=head;
              head=head->next;
              delete temp;
          }
          
          return head;
      }
};

// Delete without head pointer


class Solution {
    public:
      // Function to delete a node without any reference to the head pointer.
      void deleteNode(Node* del_node) {
          // Your code here
          
          Node *temp=del_node->next;
          del_node->data=temp->data;
          del_node->next=temp->next;
          delete temp;
          
          
      }
  };
  

//   Remove Nth Node From End of List


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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            
            int count_length = 0;
            ListNode *temp = head;
            while (temp != NULL) {
                count_length++;
                temp = temp->next;
            }
    
            
            int nth_node = count_length - n;
    
           
            if (nth_node == 0) {
                ListNode *toDelete_node = head;
                head = head->next;
                delete toDelete_node;
                return head;
            }
    
          
            temp = head;
            for (int i = 1; i < nth_node; i++) {
                temp = temp->next;
            }
    
            
            ListNode *toDelete_node = temp->next;
            temp->next = temp->next->next;
            delete toDelete_node;
    
            return head;
        }
    };

    // Reverse Linked List 
    
    

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
        ListNode* reverseList(ListNode* head) {
    
           
        ListNode *curr=head,*pre=NULL,*fut=NULL;      
    
        for(;curr;){
            fut=curr->next;
            curr->next=pre;
            pre=curr;
            curr=fut;
    
        }       
        head=pre;
        return head; 
    
        }
    };
  

    // Middle of the Linked List


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
        ListNode* middleNode(ListNode* head) {
    
            // *& two pointer slow and fast;
    
            ListNode *slow=head;
            ListNode *fast_node=head;
    
            while(fast_node!=NULL && fast_node->next!=NULL){
                slow=slow->next;
                fast_node=fast_node->next->next;
            }
          
    
            return slow;
    
    
    
    
            // *& without two pointer
            
            // ListNode *temp=head;
    
            // int count_length=0;
    
            // for(;temp!=NULL;){
            //     count_length++;
            //     temp=temp->next;
            // }
    
            // temp=head;
    
            // count_length/=2;
            // for(;count_length--;){
            //     temp=temp->next;
            // }
    
            // return temp;
        }
    };


    // Rotate List


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
var rotateRight = function(head, k) {
    
    let arr=[];
    let temp=head;
        
    for(;temp;){
        arr.push(temp.val);
        temp=temp.next;
    };
    k = k % arr.length;
    
    let res=[...arr.slice(arr.length-k),...arr.slice(0,arr.length-k)];
    temp=head;
    let index=0

    while(temp){
        temp.val=res[index];
        index++;
        temp=temp.next;
    };
    return head;
    
};