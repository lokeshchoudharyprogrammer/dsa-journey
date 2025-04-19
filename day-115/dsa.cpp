
#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
   
    vector<int> res(arr.size(), -1);
    stack<int> stk;
    // we took a stack 

    for (int k = 0; k < arr.size(); k++) {
        
        // stack length persent and if top is greater then curr element then pop
        // and add to the curr element into the res (means curr is small and that's)
        // we pushed curr to res 
        while (!stk.empty() && arr[stk.top()] > arr[k]) {
            int top = stk.top();
            res[top] = arr[k];
            stk.pop();
        }
        // if not greater top we have to push index
        stk.push(k);
    }

    return res;

    
}

class Solution {
    nextLargerElement(arr) {
        // code here
        
    let res = Array(arr.length).fill(-1);
   
    let stack = [];

    for (let i = 0; i < arr.length; i++) {
        
        while (stack.length && arr[i] > arr[stack[stack.length - 1]]) {
            
            res[stack[stack.length - 1]] = arr[i];
            
            stack.pop()
            
        }
        stack.push(i);
    }

    return res;

    }
}