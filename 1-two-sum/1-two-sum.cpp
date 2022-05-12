class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i=0; i<nums.size()-1; i++) {
            for(int ii=i+1; ii<nums.size(); ii++) {
                if(nums[i] +nums[ii] == target) {
                    v.push_back(i);
                    v.push_back(ii);
                    return v;
                }
            }
        }
        return v;
    }
};