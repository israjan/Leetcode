class Solution {
public:
    string defangIPaddr(string address) {
        string op;
      for(char i: address) {
        if(i == '.') {
          op.push_back('[');
          op.push_back('.');
          op.push_back(']');
        }
        else op.push_back(i);
      }
      return op;
    }
};