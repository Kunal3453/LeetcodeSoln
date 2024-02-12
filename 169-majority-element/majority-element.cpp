class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int n=nums.size();
        int maxf=0;
        int ans=0;
        for(auto x:m)
        {
            if(x.second>maxf)
            {
                maxf=x.second;
                ans=x.first;
            }
        }
    
        return ans;
    }
};