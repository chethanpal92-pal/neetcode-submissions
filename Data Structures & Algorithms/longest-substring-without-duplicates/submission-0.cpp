class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int res=0;
        unordered_map<char,int>my_map;
        while(right<s.size())
          {  
            while(my_map.find(s[right])!=my_map.end())
            {
               
               
                my_map.erase(s[left]);
                left++;

            }
            
                
                my_map[s[right]]=right;
                res=max(res,right-left+1);
                right++;
                
            
          }
        return res;
    }
};
