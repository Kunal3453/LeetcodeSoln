class Solution {
public:
int prime = 1e9+7;
int countUtil(string s1, string s2, int ind1, int ind2,vector<vector<int>>& dp){
    if(ind2<0)
        return 1;
    if(ind1<0)
        return 0;
    
    if(dp[ind1][ind2]!=-1)
        return dp[ind1][ind2];
    
    if(s1[ind1]==s2[ind2]){
        int leaveOne = countUtil(s1,s2,ind1-1,ind2-1,dp);
        int stay = countUtil(s1,s2,ind1-1,ind2,dp);
        
        return dp[ind1][ind2] = (leaveOne + stay)%prime;
    }
    
    else{
        return dp[ind1][ind2] = countUtil(s1,s2,ind1-1,ind2,dp);
    }
}

    int numDistinct(string s, string t) {
        int lt=s.length();
	int ls=t.length();
	  vector<vector<int>> dp(lt,vector<int>(ls,-1));
    return countUtil(s,t,lt-1,ls-1,dp);
    }
};