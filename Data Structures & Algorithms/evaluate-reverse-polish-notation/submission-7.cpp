class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>str;
        for(auto c:tokens)
        {
            if(c=="+")
            {
                int a=str.top();
                str.pop();
                int b=str.top();
                str.pop();
                str.push(a+b);
            }
            else if(c=="-")
            {
                int a=str.top();
                str.pop();
                int b=str.top();
                str.pop();
                str.push(b-a);
            }
             else if(c=="*")
            {
                int a=str.top();
                str.pop();
                int b=str.top();
                str.pop();
                str.push(a*b);
            }
            else if(c=="/")
            {
                int a=str.top();
                str.pop();
                int b=str.top();
                str.pop();
                str.push(b/a);
            }
            else
            {
                str.push(stoi(c));
            }
        }
        return str.top();
    }
};
