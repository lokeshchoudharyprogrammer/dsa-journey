int findSubString(string& s) {
        // Your code goes here
       vector<int>count(256,0); 
        int len=s.size(),first=0,second=0; 
        int diff=0;
        
        
        
        // Counting Unique Character in whole string in diff
        while(first<s.size())
        {
          if(count[s[first]]==0)
              diff++;
              
              count[s[first]]++; 
              first++; 
          
        };
        // clearing count after cal diff
        for(int i=0; i<256;i++)
        count[i]=0; 
        
        first=0; 
        
        while (second<s.size())
        {
            // second will move ahead till diff exist
            
            while (diff&&second<s.size())
            {
                if(count[s[second]]==0)
                diff--; 
                
                count[s[second]]++;
                second++;
            }
            
            len=min(len,second-first); 
            
            // first will move ahead once diff becomes 0
            while (diff!=1)
            {
                len=min(len,second-first); 
                count[s[first]]--;

                if(count[s[first]]==0)      
                diff++;
                
                
                first++; 
            }
            
        }
        
        return len; 
        
       
    }