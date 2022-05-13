class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int max=0;
      for(string i:sentences) {
        int thisstring=1;
        for(int j=0; j<i.length(); j++) {
          if(i[j] ==' ') thisstring+=1;
        }
        if(thisstring>max) max= thisstring;
      }
        return max;
    }
};