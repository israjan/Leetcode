class Solution {
public:
    int mySqrt(int x) {
      long long i=1;
      if(x == 1) return x;
        for(i=1; i<x; i++) {
          if(i*i > x) return i-1;
        }
      return i-1;
    }
};