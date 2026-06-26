class Solution {
public:
    bool isValid(string s) {
      stack <char>stck;

      for(char c:s)
      {
        if(c=='{')
        stck.push('}');
        else if (c=='(')
        stck.push(')');
        else if (c=='[')
        stck.push(']');

        else if (c==']'||c=='}'||c==')')
        {
            if(stck.empty()||stck.top()!=c)
            return false;
            stck.pop();
        }

      }
      return stck.empty();
    }
};
