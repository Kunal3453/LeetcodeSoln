class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int n=prices.size();
        int minno=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
             minno=min(minno,prices[i]);
             maxi=max(maxi,prices[i]-minno);

        }
        return maxi;
        
    }
};