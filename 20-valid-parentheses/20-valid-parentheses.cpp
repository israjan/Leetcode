class Solution {
public:
    bool isValid(string s) {
        stack<char> y;
      for(char i: s) {
        if(i == '(' || i == '[' || i == '{') y.push(i);
        else if(!y.empty()) {
          if( i == ']' && y.top() == '[') y.pop();
            else if (i == ')' && y.top() == '(') y.pop();
            else if ( i == '}' && y.top() == '{') y.pop();
            else return false;
        }
        else return false;
      }
      return y.empty();
    }
};