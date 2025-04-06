// Sort a linked list of 0s, 1s and 2s
// Remove duplicate element from sorted Linked List:
// Merge two sorted linked lists:

class Solution {
    public:
      // Function to sort a linked list of 0s, 1s and 2s.
      Node* segregate(Node* head) {
  
          // Add code here
          Node *temp=head;
          int count1=0,count2=0,count0=0;
          
          
          while(temp){
              
              if(temp->data==0){
                  count0++;
              }
              if(temp->data==1){
                  count1++;
              }
              if(temp->data==2){
                  count2++;
              }
              temp=temp->next;
          }
          
          temp=head;
          
          while(count0--){
              temp->data=0;
              temp=temp->next;
              
          }
          while(count1--){
              temp->data=1;
              temp=temp->next;
              
          }
          while(count2--){
              temp->data=2;
              temp=temp->next;
              
          }
          return head;
      }
};


class Solution {
    public:
      // Function to remove duplicates from sorted linked list.
      Node* removeDuplicates(Node* head) {
  
          // code here
          Node *curr=head->next,*pre=head;
          
          while(curr){
              if(curr->data==pre->data){
                  pre->next=curr->next;
                  delete curr;
                  curr=pre->next;
              }else{
                  pre=pre->next;
                  curr=curr->next;
              }
          }
          
          return head;
          
          
      }
};



class Solution {
    public:
      Node* sortedMerge(Node* head1, Node* head2) {
          // code here
          Node *head=new Node(0);
          Node *tail=head;
          
          
          while(head1 && head2){
             
              if(head1->data<=head2->data){
                  tail->next=head1;
                  head1=head1->next;
                 
              }
              else{
                  tail->next=head2;
                  head2=head2->next;
                 
              }
              
              tail=tail->next;
          }
          
          if (head1) tail->next = head1;
          else tail->next = head2;
  
          return head->next;
         
          
      }
};
  
