class Solution {
public:
    bool isAnagram(string s, string t) {
 
     unordered_map<char,int>str_s;       
     unordered_map<char,int>str_t;   
      if(s.size()!=t.size())
       return false;
      int i=0;
     while(i<s.size()){
        str_s[s[i]]++;
        str_t[t[i]]++;
        i++;
     }
     return str_s==str_t;



        
        


        
    }
};
