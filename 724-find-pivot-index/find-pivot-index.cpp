class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightsum=accumulate(nums.begin(),nums.end(),0);
        int leftsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
rightsum-=nums[i];
if(leftsum==rightsum)
{
    return i;
}
leftsum+=nums[i];
        }
        return -1;
    }
};