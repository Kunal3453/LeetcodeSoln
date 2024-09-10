class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=INT_MAX,i=0,j=0;
        int n=nums.size();
        int sum=0;
        while(j<n)
        {
sum+=nums[j];
while(sum>target)
{
    sum-=nums[i];
    mini=min(mini,j-i+1);
    i++;
}
if(sum==target)
{
mini=min(mini,j-i+1);
}
j++;
        }
        return (mini==INT_MAX?0:mini);
    }
};