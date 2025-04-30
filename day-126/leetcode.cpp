vector<int> maxOfSubarrays(vector<int>& arr, int k) {
    // code here
    
deque<int> dq;  // Will store indices
vector<int> res;

for (int i = 0; i < arr.size(); i++) {
    // Remove elements out of the current window
    if (!dq.empty() && dq.front() == i - k)
        dq.pop_front();

    // Remove all elements smaller than current from back
    while (!dq.empty() && arr[dq.back()] < arr[i])
        dq.pop_back();

    dq.push_back(i);

    // Start adding results when first window is formed
    if (i >= k - 1)
        res.push_back(arr[dq.front()]);
}

return res;
    
}


class Solution {
    public:
        int timeRequiredToBuy(vector<int>& tickets, int k) {
            
            queue<int>qu;
    
            for(int a=0;a<tickets.size();a++){
                qu.push(a);
            }
    
            int time=0;
    
            while(tickets[k]!=0)
            {
                // check the front and -- 
                tickets[qu.front()]--;
    
                // if front exsit then push back and pop time++
    
                if(tickets[qu.front()]){
                    qu.push(qu.front());
                }
                qu.pop();
                time++;
            }
    
            return time++;
        }
    };