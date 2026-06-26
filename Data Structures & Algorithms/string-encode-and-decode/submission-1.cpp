class Solution {
public:

    string encode(vector<string>& strs) {
      string result;
      for(auto s:strs)
      result.append(to_string(s.size())+"#"+s);
      return result;
    }

    vector<string> decode(string s) {
     int i=0;
      int j=0;
      vector<string>result;
      while(i<s.size()){
        j=i;
        while(s[j]!='#')
        {
            j++;
        }
        int length=stoi(s.substr(i,j-i));
        string str=s.substr(j+1,length);
        result.push_back(str);
        i=j+1+length;
        
      }
     
        return result;
    }
};
