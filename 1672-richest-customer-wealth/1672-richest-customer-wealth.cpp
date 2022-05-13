class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      int richest =0;
        for(int i=0; i<accounts.size(); i++) {
          int curr =0;
          for(int j=0; j<accounts[i].size(); j++) {
            curr+= accounts[i][j];
          }
          if(curr>richest) richest = curr;
        }
      return richest;
    }
};