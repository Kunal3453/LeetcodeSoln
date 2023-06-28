class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int closet=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int h=n-1;
            while(j<h)
            {
                int sum=nums[i]+nums[j]+nums[h];
                if(sum==target)
                {
                    return target;
                }
                if(abs(sum-target)<abs(closet-target))
                {
                    closet=sum;
                }
                if(sum<target)
                {
                    j++;
                }
                if(sum>target)
                {
                    h--;
                }
            }
        }
        return closet;
    }
};