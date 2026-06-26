class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>s_count;
        unordered_map<char,int>t_count;
        int i=0;
        if(s.size()!=t.size()) return false;
        
        while(i<s.size())
        {
            s_count[s[i]]++;
            t_count[t[i]]++;
            i++;
        }
        i=0;
       
            return (s_count==t_count);
            
            
        
        
        


        
    }
};
