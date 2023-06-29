class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int j=0;
        int m=nums.size();
        int i=0;
        while(2*i<m)
        {
            j=i+n;
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
        }
        return ans;
    }
};