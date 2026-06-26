class Solution {
public:
    bool isValid(string s) {
        stack<char>str;
        for (auto c:s)
        {
            if(c=='{')
            str.push('}');
            else if (c=='[')
            str.push(']');
            else if(c=='(')
            str.push(')');
            else if(c==']'||c=='}'||c==')')
            {
            if(str.empty()||str.top()!=c)
            return false;
            str.pop();
            }
        }

        return str.empty();

    }
};
