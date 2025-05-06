#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* Binary_trree() {

    int x;
    cin >> x;
    if (x == -1) {
        return nullptr;
    }

    Node *root = new Node(x);
    root->left = Binary_trree();
    root->right = Binary_trree();
    
    return root;
}


int main() {
    cout << "Enter tree values (use -1 for NULL nodes):\n";
    
    Node* root = Binary_trree();

    cout << "Inorder traversal:\n";
   
    cout << endl;

    return 0;
}
























