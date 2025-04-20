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


/**
 * @param {number[]} nums
 * @return {number[]}
 */
var nextGreaterElements = function(nums) {
    
    const n = nums.length;
    const res = new Array(n).fill(-1);
    
    const stack = [];

    for (let i = 0; i < 2 * n; i++) {
        
        const currIndex = i % n;

        while (!!stack && nums[stack[stack.length - 1]] < nums[currIndex]) {
            const prevIndex = stack.pop();
            res[prevIndex] = nums[currIndex];
        }

       
        stack.push(currIndex);
    }

    return res;

};