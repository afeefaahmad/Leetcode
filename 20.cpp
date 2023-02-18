//Valid Parenthesis

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;

        for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        if(ch == '(' || ch == '[' || ch == '{') {   //whenever opening brakcets are found just push in stack
            st.push(ch);
        }
        else {  //closing brackets
            if(!st.empty())     //when there is already sth in stack
            {
            char top = st.top();
            if( (ch==')' && top=='(')  ||  (ch=='}'&& top=='{')  ||  (ch==']' && top=='['))
                st.pop();       //pop if matching
            else {
                return false; //no mtaching
                }
            }
            else {
            return false; //closing bracket encountered but nth in stack
            }

        } 
        
        }   
    if(st.empty()) {
        return true; //after poping if stack is empty /initially empty 
        }
    else {
        return false;   //sth left in stack
        }
        
    }
    
};
