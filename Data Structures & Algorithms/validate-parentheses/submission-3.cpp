class Solution {
public:
    bool isValid(string s) {

        stack<char> brackets;
        
        for(char ch: s)
        {
            if (ch == '(' || ch == '[' || ch == '{')
            {
                brackets.push(ch);
            }
            else 
            {
                if(brackets.empty())
                {
                    return false;
                }

                // this is brackets top, not top of string s 
                char top = brackets.top();

                // use '' for chars         
                if( (ch == ')' && top != '(') ||
                    (ch == ']' && top != '[') || 
                    (ch == '}' && top != '{') )
                {
                    return false;
                }

                brackets.pop();
            }
        }

        return brackets.empty();
    }
};
