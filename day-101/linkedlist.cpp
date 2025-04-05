
  // remove last element
  // delete from start;
  // insert at start and end with given postion
  //convert array into a double linkedlist
  // delete from any postion
  


#include <iostream>
using namespace std;

class Node {
  
  public:
  
  Node *pre;
  Node *next;
  int data;
  
  Node(int value){
    data=value;
    next=NULL;
    pre=NULL;
  } 

};


int main() 
{
 
 Node *head;
 head=NULL;
 
 
 Node *temp;
 
 int arr[5]={1,2,3,4,5};

  //** convert array into a double linkedlist

  for(int k=0;k<5;k++){
    if(head==NULL){
      head=new Node(arr[k]);
      temp=head;
    }else{
      Node *last=new Node(arr[k]);
      temp->next=last;
      last->pre=temp;
      temp=last;
    }
  }
  
  // ** insert at start and end with given postion
  int postion=2;
  
  if(postion==0){
    
    if(head==NULL){
      head=new Node(20);
      
    }else{
      Node *temp=new Node(408);
      temp->next=head;
      head->pre=temp;
      head=temp;
    }
    
  }else{
    Node *curr=head;
    //go the node 
    while(--postion){
      curr=curr->next;
    }
    
    
    // insert at end
    if(curr->next==NULL){
      Node *temp=new Node(98); 
      temp->pre=curr;
      curr->next=temp;
      temp->next=NULL;
    }else{
      // insert and postion
      Node *temp=new Node(328); 
      temp->next=curr->next;
      temp->pre=curr;
      curr->next=temp;
      temp->next->pre=temp;
  
    }
  }
  
  
  // delete from start;
  
  if(head!=NULL){
    Node *temp=head;
    head=temp->next;
    delete temp;
    
    if(head){
      
      head->pre=NULL;
      
    }
  }
  
  // remove last element
  
  if(head!=NULL){
    
    if(head->next==NULL){
      delete head;
    }
    else{
      
      Node *last_node=head;
      
      while(last_node->next!=NULL){
        last_node=last_node->next;
      }
      last_node->pre->next=NULL;
      delete last_node;
    }
  
  }
   
  // delete from any postion
  int pos=1;
  
  if(pos==1){
    
    if(head!=NULL){
    Node *temp=head;
    head=temp->next;
    delete temp;
    
    if(head){
      
      head->pre=NULL;
      
    }
    
  }else{
    
      
      Node *remove_index_node=head;
      while(--pos){
        remove_index_node=remove_index_node->next;
      }
    
    if(head->next==NULL){
      
      remove_index_node->pre->next=NULL;
      delete remove_index_node;
      
    }else{
    
      remove_index_node->pre->next=remove_index_node->next;
      remove_index_node->next->pre=remove_index_node->pre;
      delete remove_index_node;
    }
    
  
  }
  
  
  }
  
   
  
  Node *print=head;
  
  while(print){
    cout<<print->data<<endl;
    print=print->next;
  }

 
}



  
  
  
  
