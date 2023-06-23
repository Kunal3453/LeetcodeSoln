class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==target)
        //     {
        //         return i;
        //     }
        //     else if(nums[i]>target)
        //     {
        //         return i;
        //     }
        // }
        // return (nums.size());
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return low;
    }
};