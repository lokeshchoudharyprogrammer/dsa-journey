class Node {
    constructor(data) {
      this.data = data;
      this.next = null;
    }
  }
  
  
  class MyQueue {
      constructor() {
          this.front = null; // QueueNode
          this.rear = null;  // QueueNode
        
      }
  
      /**
       * @param {number} x
       */
      // Function to push an element into the queue.
      push(x) {
          
      const newNode = new Node(x);
  
      if (this.rear === null) {
       
        this.front = newNode;
        this.rear = newNode;
        
      } else {
        this.rear.next = newNode;
        this.rear = newNode;
      }
    }
  
      /**
       * @returns {number}
       */
      // Function to pop front element from the queue.
      pop() {
          
          // code here
          if (this.front === null) return -1; // Queue empty
  
          const val = this.front.data;
          this.front = this.front.next;
      
          if (this.front === null) {
            this.rear = null; 
          }
      
          return val;
      }
  }



class MyQueue {

    constructor() {
        this.front = 0;
        this.rear = 0;
        this.arr = []
    }

    /**
     * @param {number} x
     */

    // Function to push an element x in a queue.
    push(x) {
        
        // Your code here
         this.arr.push(x);
        
    }

    /**
     * @returns {number}
     */

    // Function to pop an element from queue and return that element.
    pop() {
        
        if (this.arr.length === 0) return -1;
        return this.arr.shift();
    
        // Your code here
    }
}
