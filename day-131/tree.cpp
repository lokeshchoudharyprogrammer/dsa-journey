#include <iostream>
#include <queue>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node(int value){
            data=value;
            left = right = nullptr;
        }
};

int main(){
    int x;
    queue<Node*>q;
    cout<<"Enter root node value";
    cin>>x;
    Node *root=new Node(x);
    q.push(root);
    // building tree level wise 
    while(q.size()>0){
        // take out the front node
        Node *temp=q.front();
        // pop it out
        q.pop();
        // take input for left and right child
        cout<<"Enter left child of "<<temp->data;
        cin>>x;
        // if not null push it into the queue
        if(x!=-1){
            // create a node and push it into the queue
            temp->left=new Node(x);
            q.push(temp->left);
        }
        // right child
        cout<<"Enter right child of "<<temp->data;
        cin>>x;
        // if not null push it into the queue
        if(x!=-1){
            // create a node and push it into the queue
            temp->right=new Node(x);
            q.push(temp->right);
        }
    }
}