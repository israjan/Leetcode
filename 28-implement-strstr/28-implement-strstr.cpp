class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "") return 0;
      
        int i=0, j=0;
        for(; i<haystack.length(); i++)
            if(needle== haystack.substr(i, needle.length())) return i;
        return -1;
    }
};