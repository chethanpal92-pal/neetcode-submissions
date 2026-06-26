class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int>s_count;
      unordered_map<char,int>t_count;
      if(s.size()!=t.size())return false;
      int i=0;

      while(i<s.size()){
        s_count[s[i]]++;
        t_count[t[i]]++;
        i++;
      }
        return (s_count==t_count);    
            
        
        
        


        
    }
};
