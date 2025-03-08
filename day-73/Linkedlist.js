class Solution {
    // Function to count nodes of a linked list.
    getCount(head) {
        // Code here
        let count=0;
        let current=head
        while(current!==null){
            current=current.next
            count++
        }
        return count;
    }
}


class Node {
    constructor(data) {
      this.data = data;
      this.next = null;
    }
  }
  
  class LinkedList {
    constructor() {
      this.head = null;
    }
    
    
    insertData(value){
      let newNode=new Node();
      newNode.data=value;
      newNode.next=this.head;
      this.head=newNode
    }
    
    InsertInLast(value){
      
     let newNode=new Node(value);
     
     if(this.head==null){
       this.head=newNode;
     }else{
       
       let current=this.head;
       while(current.next!==null){
         current=current.next
       }
       current.next=newNode
     }
     
     
    }
    
    display() {
      if (!this.head) {
        console.log("List is empty.");
        return;
      }
      let current = this.head;
      let output = "";
      while (current) {
        output += current.data + " ";
        current = current.next;
      }
      console.log(output);
    }
    searchvalue(value){
      
      let temp=this.head;
      
      while(temp){
        
        if(temp.data==value){
          console.log("yes",value)
          break;
        }
        temp=temp.next
      }
      
    
    }
  }
  
  // Example usage:
  const list1 = new LinkedList();
  // list1.insertData(2)
  // list1.insertData(3)
  // list1.insertData(4)
  list1.InsertInLast(2)
  list1.InsertInLast(3)
  // list1.searchvalue(3)
  list1.display();
  
  
  
  
  