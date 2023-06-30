class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       map<int,int>mpp;
       vector<int>ans;
       for(auto x:nums)
       {
           mpp[x]++;
       }
       for(auto x:mpp)
       {
           if(x.second>1)
           {
ans.push_back(x.first);
           }
       }
       return ans;
    }
};