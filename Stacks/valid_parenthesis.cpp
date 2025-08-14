/*

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
    Open brackets must be closed by the same type of brackets.
    Open brackets must be closed in the correct order.
    Every close bracket has a corresponding open bracket of the same type.
 
Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([])"
Output: true

Example 5:
Input: s = "([)]"
Output: false

*/


// Solution (O(n))
# include <iostream>
# include <stack>

using namespace std;

bool validParenthesis(string s){
    stack <char> stack;

        for(int i=0 ; i<s.length() ; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stack.push(s[i]);
            }
            else if(s[i]==')'){
                if(!stack.empty() && stack.top()=='('){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]=='}'){
                if(!stack.empty() && stack.top()=='{'){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]==']'){
                if(!stack.empty() && stack.top()=='['){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
        }
       
        return true;

}

int main(){
    string s = "()[]{}";
    cout << validParenthesis(s) << endl;
    
    return 0;
}