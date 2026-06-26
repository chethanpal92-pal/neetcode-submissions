class Solution {
public:
    bool isValid(string s) {
        stack <char>str;

        for(char c:s)
        {
            if(c=='(')
            str.push(')');
            else if (c=='{')
            str.push('}');
            else if (c=='[')
            str.push(']');

            else if(str.empty()||str.top()!=c)
             return false;
            else
             str.pop();
        }
        return str.empty();
    }
};
