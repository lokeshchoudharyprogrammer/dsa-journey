#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int main() {
    queue<Node *> q;

    int rootVal;
    cout << "Enter root value: ";
    cin >> rootVal;

    if (rootVal == 0) return 0; 

    Node *root = new Node(rootVal);
    
    q.push(root);

    while (!q.empty()) {

        Node *temp = q.front();
        q.pop();

        int x, y;
        cout << "Enter left and right of " << temp->data << ": ";
        cin >> x >> y;

        if (x != -1) {
            temp->left = new Node(x);
            q.push(temp->left);
        }

        if (y != -1) {
            temp->right = new Node(y);
            q.push(temp->right);
        }
    }

    return 0;
}

