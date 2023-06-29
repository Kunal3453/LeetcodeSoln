class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
    vector<vector<int>>ans(2,vector<int>());
        set<int>st2;
        int n2=nums2.size();
        set<int>st1;
        for(auto x:nums1)
        {
            st1.insert(x);
        }
        for(auto x:nums2)
        {
            st2.insert(x);
        }
          set<int>sol;
        for(auto x:nums1)
        {
          
            if(st2.find(x)==st2.end())
            {
                sol.insert(x);
            }
        }
         ans[0].insert(ans[0].end(),sol.begin(),sol.end());
         sol.clear();
        for(auto x:nums2)
        {
            if(st1.find(x)==st1.end())
            {
                sol.insert(x); 
            }
        }
         ans[1].insert(ans[1].end(),sol.begin(),sol.end());
        return ans;
    }
};