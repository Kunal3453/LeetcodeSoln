class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
//         int n=nums.size();
//         int zerocount=0,maxi=0;
//   int i=0,j=0;
//   while(j<n)
//   {
//       if(nums[j]==0)
//       {
//           zerocount++;
//       }
//       if(zerocount>k)
//       {
//           if(nums[i]==0)
//           {
//               zerocount--;
//           }
//           i++;
//       }
//       maxi=max(maxi,j-i+1);
//       j++;
//   }
//   return maxi;
int n=nums.size();
int j=0,i=0,ans=0,zero=0;
while(j<n)
{
    if(nums[j]==0)
    {
        zero++;
    }
    while(zero>k)
    {
        if(nums[i]==0)
        {
            zero--;
        }
        i++;
    }
    ans=max(ans,j-i+1);
    j++;
}
return ans;
    }
};