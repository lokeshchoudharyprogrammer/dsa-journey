#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    Node *Head = NULL;

    int arr[5] = {1, 2, 3, 4, 5};

    // Insert nodes at the beginning
    for(int a = 0; a < sizeof(arr)/sizeof(arr[0]); a++) {
        if (Head == NULL) {
            Head = new Node(arr[a]);
        } else {
            Node *temp = new Node(arr[a]);
            temp->next = Head;
            Head = temp;
        }
    }

    // Print linked list
    Node *current = Head;
    while(current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL";

    return 0;
}
