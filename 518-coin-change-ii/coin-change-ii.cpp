
class Solution {
public:
int countWaysToMakeChangeUtil(vector<int>& arr,int ind, int T, vector<vector<int
>>& dp){

    if(ind == 0){
        return (T%arr[0]==0);
    }
    
    if(dp[ind][T]!=-1)
        return dp[ind][T];
        
    long notTaken = countWaysToMakeChangeUtil(arr,ind-1,T,dp);
    
    long taken = 0;
    if(arr[ind] <= T)
        taken = countWaysToMakeChangeUtil(arr,ind,T-arr[ind],dp);
        
    return dp[ind][T] = notTaken + taken;
}

    int change(int T, vector<int>& arr) {
        int n=arr.size();
          vector<vector<int>> dp(n,vector<int>(T+1,-1));
    return countWaysToMakeChangeUtil(arr,n-1, T, dp);
    }
};