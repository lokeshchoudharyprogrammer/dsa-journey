class Solution {
    public:
      vector<int> firstNegInt(vector<int>& arr, int k) {
      deque<int> qu;
      vector<int> res;
  
      // Process the first window
      for (int i = 0; i < k; i++) {
          if (arr[i] < 0)
              qu.push_back(i);
      }
  
      // Add result for the first window
      res.push_back(qu.empty() ? 0 : arr[qu.front()]);
  
      // Process the remaining windows
      for (int i = k; i < arr.size(); i++) {
          // Remove elements outside the current window
          if (!qu.empty() && qu.front() <= i - k)
              qu.pop_front();
  
          // Add current element if it is negative
          if (arr[i] < 0)
              qu.push_back(i);
  
          res.push_back(qu.empty() ? 0 : arr[qu.front()]);
      }
  
      return res;
  }
  };
  