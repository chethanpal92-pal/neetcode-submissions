class Solution {
public:

    string encode(vector<string>& strs) {
            string result;
        for(auto c:strs)  
        { 
            result.append(to_string(c.size())+"#"+c);
        }      
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while( i < s.size())
            {
                int j=i;

                while(s[j]!='#')
                {
                    j++;
                }
                int length=stoi(s.substr(i,j-i));
                string str=s.substr(j+1,length);
                i=j+length+1;
                result.push_back(str);    
            }
            return result;
    }
};