
class Solution {
public:
    // int solve(vector<int>&cost,int n,vector<int>&dp)
    // {
    //     if(n==0)
    //     {
    //         return cost[0];
    //     }
    //     if(n==1)
    //     {
    //         return cost[1];
    //     }
    //     if(dp[n]!=-1)
    //     {
    //         return dp[n];
    //     }
    //    dp[n]=cost[n]+min(solve(cost,n-1,dp),solve(cost,n-2,dp));
    //     return dp[n];
    // }
       int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        // vector<int>dp(n+1,-1);
        for(int i=2;i<n;i++)
        {
            cost[i]+=min(cost[i-1],cost[i-2]);
        }
        return min(cost[n-1],cost[n-2]);
        // int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        // return ans;
    }  
     
};