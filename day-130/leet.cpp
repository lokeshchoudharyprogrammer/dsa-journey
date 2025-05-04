class Solution {
    public:
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            
            deque<int>d;
            vector<int>ans;
            int n=nums.size();
    
            for(int j=0;j<k-1;j++){
                
                if(d.empty()){
    
                    d.push_back(j);
    
                }else {
                    while(d.size()>0 && nums[d.back()]<nums[j]){
                        d.pop_back();
                    }
                    d.push_back(j);
                }
    
            }
    
    
            for(int j=k-1;j<n;j++){
                
                // remove smaller element;
                while(!d.empty() && nums[d.back()]<nums[j]){
                        d.pop_back();
                }
                d.push_back(j);
    
                // remove outside index from d
    
                if(d.front()<=j-k){
                    d.pop_front();
                }
    
                // find ans
                ans.push_back(nums[d.front()]);
    
            }
    
            return ans;
        }
    };