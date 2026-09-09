class Solution {
public:
    bool isValid(string s) {
        stack<int> charStack;

        for(char c:s){
            if(c == '(' || c == '{' ||c == '[' ) charStack.push(c);
            else if(c == ')' && charStack.size() != 0 && charStack.top() == '(') {
                charStack.pop();
            }
            else if(c == '}' && charStack.size() != 0 && charStack.top() == '{') {
                charStack.pop();
            }
            else if(c == ']' && charStack.size() != 0 && charStack.top() == '[') {
                charStack.pop();
            }
            else{
                return false;
            }
        }
        if(charStack.size() != 0) return false;
        else return true;
    }
};
