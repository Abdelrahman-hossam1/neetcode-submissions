class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        for(char c : s) {
            if(isalnum(c)) filtered += tolower(c);
        }
        stack <char> myStack;
        for(char c : filtered)
            myStack.push(c);
        for(char c : filtered){
            if(c!=myStack.top())  return false;

        myStack.pop();    
        }
        return true;
    }
};
