class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<string,int>string_1;
        unordered_map<string,int>string_2;
        int i=0;
        int j=0;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        while(i<s.size() || j<t.size())
        {
            if(s[i]!=t[i])
            return false;
            i++;
            j++;
        }
         return true;
        


        
    }
};
