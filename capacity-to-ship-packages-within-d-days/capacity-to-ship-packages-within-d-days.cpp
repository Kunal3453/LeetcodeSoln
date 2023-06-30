class Solution {
public:
int func(vector<int>arr,int n,int ans)
  {
      int day=1,load=0;
      for(int i=0;i<n;i++)
      {
          if(load+arr[i]>ans)
          {
              day=day+1;
              load=arr[i];
          }
          else
          {
              load+=arr[i];
          }
          
      }
      return day;
  }
    int shipWithinDays(vector<int>&arr, int D) {
        int N=arr.size();
      int maxi=*max_element(arr.begin(),arr.end());
        int sum=accumulate(arr.begin(),arr.end(),0);
        int low=maxi,high=sum;
        int ans=sum;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int daysreq=func(arr,N,mid);
            if(daysreq<=D)
            {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;  
    }
};