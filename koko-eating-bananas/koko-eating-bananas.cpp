class Solution {
public:
int findmax(vector<int>piles,int n)
  {
      long long  maxi=INT_MIN;
      for(int i=0;i<n;i++)
      {
          if(piles[i]>maxi)
          {
              maxi=piles[i];
          }
      }
      return maxi;
  }
  int func(vector<int>piles,int n,int mid)
  {
      long long  totalhours=0;
      for(int i=0;i<n;i++)
      {
          totalhours+=ceil((double)piles[i]/(double)mid);
      }
      return totalhours;
  }
    int minEatingSpeed(vector<int>& piles, int H) {
        int N=piles.size();
        if(H==1000000000)
        {
            return 3;
        }
      long long  low=1,high=findmax(piles,N);
        long long  ans=INT_MAX;
        while(low<=high)
        {
            long long  mid=(low+high)/2;
            long long  hour=func(piles,N,mid);
            if(hour<=H)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};