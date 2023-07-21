class Solution {
public:
void helper(int ind,vector<vector<int>>&ans,vector<int>&ds,vector<int>&arr,int target)
{
    if(ind==arr.size())
    {
        if(target==0)
        {
            ans.push_back(ds);
        }
        return;
    }
    if(arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        helper(ind,ans,ds,arr,target-arr[ind]);
        ds.pop_back();
    }
    helper(ind+1,ans,ds,arr,target);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        helper(0,ans,ds,candidates,target);
        return ans;
    }
};