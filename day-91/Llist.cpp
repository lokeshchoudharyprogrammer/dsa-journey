#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Insert at the beginning
void insertAtBeginning(Node*& Head, int value) {
    Node* temp = new Node(value);
    temp->next = Head;
    Head = temp;
}

// Insert at the end
void insertAtEnd(Node*& Head, Node*& tail, int value) {
   
    // Node *tail=Head;
    
    if(Head==NULL){
      Head=new Node(value);
      tail=Head;
    }else{
      tail->next=new Node(value);
      tail=tail->next;
      
    }
  
}


Node* CreateLL(int arr[],int index,int size){
  
  if(index==size){
    return NULL;
  }
  
  Node *temp;
  temp=new Node(arr[index]);
  temp->next= CreateLL(arr, index+1, size);
  return temp;
  
}

// Print linked list
void printList(Node* Head) {
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Linked list for insertion at beginning
    Node* HeadBegin = NULL;
    
    HeadBegin=CreateLL(arr,0,5);

    for (int a = 0; a < 5; a++) {
        insertAtBeginning(HeadBegin, arr[a]);
    }

    cout << "Insert at Beginning (Output): ";
    printList(HeadBegin); 

    // Linked list for insertion at end
    Node* HeadEnd = NULL;
    Node* tail = NULL;

    for (int a = 0; a < 5; a++) {
        insertAtEnd(HeadEnd, tail, arr[a]);
    }

    cout << "Insert at End (Output): ";
    printList(HeadEnd);   

    return 0;
}
