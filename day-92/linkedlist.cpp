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
  
    
    

    for (int a = 0; a < 5; a++) {
        insertAtBeginning(HeadBegin, arr[a]);
    }

    cout << "Insert at Beginning (Output): ";
    
    
    // add in particular postion
    int x=3;
    int value=30;
    
    Node *temp;
    temp=HeadBegin;
    x--;
    
    while(x--){
      temp=temp->next;
    }
    Node *newNode=new Node(value);
    newNode->next=temp->next;
    temp->next=newNode;
    
    printList(HeadBegin);  // Output: 5 4 3 2 1

    return 0;
}


