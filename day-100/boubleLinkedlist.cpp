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
 
 
 
 int arr[5]={1,2,3,4,5};
 
// add node to the start in the double linkedlist
for(int a=0;a<5;a++){
  if(head==NULL){
    head=new Node(arr[a]);
  }else{
     
    Node *newNode=new Node(arr[a]);
    newNode->next=head;
    newNode->pre=newNode;
    head=newNode;
     
     
  }
}


 
// add node to the end in the double linkedlist
 Node *print=head;
 
 while(print->next!=NULL){
   print=print->next;
 }
 
 Node *newNode=new Node(22);
 print->next=newNode;
 newNode->pre=print;
 
 
// print  double linkedlist
Node *printing=head;
 
  while(printing){
    cout<<printing->data<<endl;
   printing=printing->next;
 }
 

 
}

