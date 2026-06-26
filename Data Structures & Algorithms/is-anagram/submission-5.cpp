class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>s_string ;
        unordered_map<char,int> t_string;;
        int i=0,j=0;
        while(i<s.size())
            {
                s_string[s[i]]++;
                i++;
               
            }
        while(j<t.size())
        {
         t_string[t[j]]++;
         j++;
        }
         return s_string==t_string;
            

    }
};
