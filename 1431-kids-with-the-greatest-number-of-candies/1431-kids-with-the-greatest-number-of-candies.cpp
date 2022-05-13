class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      vector<bool> op;
      int max=candies[0];
      for(int i=0; i<candies.size(); i++) {
        if(max<candies[i]) max = candies[i];
      }
      for(int i=0; i<candies.size(); i++) {
        if(candies[i]+extraCandies >= max) op.push_back(true);
        else op.push_back(false);
      }
      return op;
    }
};