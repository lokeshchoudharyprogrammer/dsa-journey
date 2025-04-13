
// Stack using Linked List

#include <iostream>
#include <stack>
using namespace std;


// stack<int>S;
// S is name of stack;

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
    Node *top;
    int size;

public:
    Stack() {
        top = NULL;
        size = 0;
    }

    // Push operation
    void push(int value) {
        Node *temp = new Node(value);
        temp->next = top;
        top = temp;
        size++;
        cout << "Pushed " << value << " into the stack\n";
    }

    // Pop operation
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }
        Node *temp = top;
        cout << "Popped " << temp->data << " from the stack\n";
        top = top->next;
        delete temp;
        size--;
    }

    // Peek operation
    int peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        }
        cout << "Top value: " << top->data << "\n";
        return top->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return true;
        } else {
            cout << "Stack is not empty\n";
            return false;
        }
    }

    // Return current size of stack
    int isSize() {
        cout << "Current size: " << size << "\n";
        return size;
    }
};

int main() {
  
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.peek();
    s.isSize();
    s.pop();
    s.isEmpty();

    return 0;
}

// using array 

#include <iostream>
using namespace std;

class Stack {
    int *arr;
    int size;
    int top;

public:
bool flag;
    // Constructor
    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[s];
        flag=1; 
    }

    // Push value to the stack
    void push(int value) {
        if (top == size - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = value;
        cout << "Pushed " << value << " into the stack\n";
        flag=0;
    }

    // Pop value from the stack
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        cout << "Popped " << arr[top] << " from the stack\n";
        top--;
        if(top==-1){
          flag=1;
        }
    }

    // Peek at the top value
    void peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Top value: " << arr[top] << "\n";
        }
    }

    // Check if stack is empty
    void isEmpty() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack is not empty\n";
        }
    }

    // Return current size of stack
    void isSize() {
        cout << "Current size: " << top + 1 << "\n";
    }

    // Destructor
    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(5);
    
    s.push(-1);
    
   
    
    if(s.flag==0){
      s.peek();
    }else{
      s.isEmpty();
    }
    
   

    // S.push(5);
    // S.push(6);
    // S.push(7);
    // S.push(5);
    // S.push(6);
    // S.push(7);

    // S.peek();
    // S.isSize();
    // S.pop();
    // S.isEmpty();
    
    // S.pop();
 
    return 0;
}



//  question 1 


/**
 * @param {string} s
 * @return {boolean}
 */
 var isValid = function(s) {

    let arr=[];
  
    for(let k=0;k<s.length;k++){
  
      if(s[k]=="(" || s[k]=="{" || s[k]=="["){
          arr.push(s[k])
      }else{
          let last=arr[arr.length-1]
          if(s[k]==")" && last=="("  || s[k]=="}" && last=="{" || s[k]=="]" && last=="[" ){
              arr.pop()
          }else{
              return false;
          }
      }
  
    }  
  
    return arr.length==0?true:false
    
  };